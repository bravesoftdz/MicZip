unit CreateArchive;

interface

{$reference 'System.IO.Packaging.dll'}
{$reference 'System.IO.FileSystem.Primitives.dll'}

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
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
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
    groupBox2: GroupBox;
    listBox1: ListBox;
    button4: Button;
    button5: Button;
    openFileDialog2: OpenFileDialog;
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
  var Archive := new System.IO.Compression.DeflateStream(System.IO.File.OpenWrite(textBox1.Text), CompressLevel, true);
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

procedure CreateArchiveForm.button5_Click(sender: Object; e: EventArgs);
begin
  listBox1.Items.Remove(listBox1.SelectedItem);
end;

procedure CreateArchiveForm.button4_Click(sender: Object; e: EventArgs);
begin
  openFileDialog2.ShowDialog;
end;

procedure CreateArchiveForm.openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
begin
  if(listBox1.Items.Contains(openFileDialog2.FileName) = false) then listBox1.Items.Add(openFileDialog2.FileName);
end;

end.
