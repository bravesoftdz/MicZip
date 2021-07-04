unit AddFiles;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel;

type
  AddFilesForm = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource AddFiles.AddFilesForm.resources}
    panel1: Panel;
    label1: &Label;
    button1: Button;
    button2: Button;
    button3: Button;
    textBox1: TextBox;
    label2: &Label;
    openFileDialog1: OpenFileDialog;
    listBox1: ListBox;
    button4: Button;
    button5: Button;
    groupBox1: GroupBox;
    openFileDialog2: OpenFileDialog;
    label3: &Label;
    pictureBox1: PictureBox;
    {$include AddFiles.AddFilesForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AddFilesForm.button1_Click(sender: Object; e: EventArgs);
begin
  if(listBox1.Items.Count <> 0) then
  begin
    textBox1.Enabled := false;
    button1.Enabled := false;
    button3.Enabled := false;
    button4.Enabled := false;
    button5.Enabled := false;
    label3.Visible := false;
    var i: integer;
    var AllItems: string;
    for i := 0 to listBox1.Items.Count - 1 do
      AllItems := AllItems + ' "' + listBox1.Items[i].ToString + '"';
    if(textBox1.Text.EndsWith('.7z')) then exec('7zr.exe', 'a -y "' + textBox1.Text + '" ' + AllItems);
    Close;
  end else label3.Visible := true;
end;

procedure AddFilesForm.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure AddFilesForm.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure AddFilesForm.button3_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure AddFilesForm.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  textBox1.Text := openFileDialog1.FileName;
end;

procedure AddFilesForm.button4_Click(sender: Object; e: EventArgs);
begin
  openFileDialog2.ShowDialog;
end;

procedure AddFilesForm.openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
begin
  if(listBox1.Items.Contains(openFileDialog2.FileName) = false) then listBox1.Items.Add(openFileDialog2.FileName);
end;

procedure AddFilesForm.button5_Click(sender: Object; e: EventArgs);
begin
  listBox1.Items.Remove(listBox1.SelectedItem);
end;

procedure AddFilesForm.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  if(textBox1.Text <> '') then button1.Enabled := true else button1.Enabled := false;
end;

end.
