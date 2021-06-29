unit Unpack;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel;

type
  UnpackForm = class(Form)
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure textBox2_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unpack.UnpackForm.resources}
    panel1: Panel;
    label1: &Label;
    button3: Button;
    textBox1: TextBox;
    label2: &Label;
    openFileDialog1: OpenFileDialog;
    button1: Button;
    textBox2: TextBox;
    label3: &Label;
    button2: Button;
    button4: Button;
    folderBrowserDialog1: FolderBrowserDialog;
    pictureBox1: PictureBox;
    {$include Unpack.UnpackForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure UnpackForm.button3_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure UnpackForm.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  textBox1.Text := openFileDialog1.FileName;
end;

procedure UnpackForm.button2_Click(sender: Object; e: EventArgs);
begin
  textBox1.Enabled := false;
  textBox2.Enabled := false;
  button3.Enabled := false;
  button1.Enabled := false;
  exec('7zr.exe', 'x -y "' + textBox1.Text + '" -o"' + textBox2.Text + '"');
  Close;
end;

procedure UnpackForm.button4_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure UnpackForm.button1_Click(sender: Object; e: EventArgs);
begin
  folderBrowserDialog1.ShowDialog;
  textBox2.Text := folderBrowserDialog1.SelectedPath;
end;

procedure UnpackForm.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  if((textBox1.Text <> '') and (textBox2.Text <> '')) then button2.Enabled := true else button2.Enabled := false;
end;

procedure UnpackForm.textBox2_TextChanged(sender: Object; e: EventArgs);
begin
  if((textBox1.Text <> '') and (textBox2.Text <> '')) then button2.Enabled := true else button2.Enabled := false;
end;

end.
