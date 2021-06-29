unit CreateArchive;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel;

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
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource CreateArchive.CreateArchiveForm.resources}
    pictureBox1: PictureBox;
    label1: &Label;
    button1: Button;
    button2: Button;
    label2: &Label;
    textBox1: TextBox;
    button3: Button;
    saveFileDialog1: SaveFileDialog;
    groupBox2: GroupBox;
    listBox1: ListBox;
    button4: Button;
    button5: Button;
    openFileDialog2: OpenFileDialog;
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
  if(listBox1.Items.Count <> 0) then
  begin
    label3.Visible := false;
    textBox1.Enabled := false;
    button1.Enabled := false;
    button3.Enabled := false;
    button4.Enabled := false;
    button5.Enabled := false;
    var i: integer;
    var AllItems: string;
    for i := 0 to listBox1.Items.Count - 1 do
      AllItems := AllItems + ' "' + listBox1.Items[i].ToString + '"';
    exec('7zr.exe', 'a -y "' + textBox1.Text + '" ' + AllItems);
    Close;
  end else label3.Visible := true;
end;

procedure CreateArchiveForm.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure CreateArchiveForm.CreateArchiveForm_Load(sender: Object; e: EventArgs);
begin
  
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

procedure CreateArchiveForm.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  if(textBox1.Text <> '') then button1.Enabled := true else button1.Enabled := false;
end;

end.
