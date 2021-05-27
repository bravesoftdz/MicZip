unit CreateArchive;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel;

var
  CompressLevel: System.IO.Compression.CompressionLevel;

type
  CreateArchiveForm = class(Form)
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure CreateArchiveForm_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource CreateArchive.CreateArchiveForm.resources}
    pictureBox1: PictureBox;
    label1: &Label;
    button1: Button;
    button2: Button;
    groupBox1: GroupBox;
    label2: &Label;
    textBox1: TextBox;
    button3: Button;
    saveFileDialog1: SaveFileDialog;
    comboBox1: ComboBox;
    label3: &Label;
    panel1: Panel;
    {$include CreateArchive.CreateArchiveForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure CreateArchiveForm.button3_Click(sender: Object; e: EventArgs);
begin
  saveFileDialog1.ShowDialog;
end;

procedure CreateArchiveForm.saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  textBox1.Text := saveFileDialog1.FileName;
end;

procedure CreateArchiveForm.button1_Click(sender: Object; e: EventArgs);
begin
  if(comboBox1.Text = 'None') then CompressLevel := System.IO.Compression.CompressionLevel.NoCompression;
  if(comboBox1.Text = 'Fast') then CompressLevel := System.IO.Compression.CompressionLevel.Fastest;
  if(comboBox1.Text = 'Optimal') then CompressLevel := System.IO.Compression.CompressionLevel.Optimal;
  //System.IO.Compression.DeflateStream.Create(textBox1.Text, CompressLevel, false);
  Close;
end;

procedure CreateArchiveForm.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure CreateArchiveForm.CreateArchiveForm_Load(sender: Object; e: EventArgs);
begin
  comboBox1.Text := 'Fast';
end;

end.
