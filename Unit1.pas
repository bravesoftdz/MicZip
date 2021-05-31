unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, CreateArchive, AddFiles, Unpack, About;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure linkLabel2_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure createAnArchiveToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure addFilesToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure linkLabel4_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure unpackToolStripMenuItem_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    micZipToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    groupBox1: GroupBox;
    linkLabel2: LinkLabel;
    pictureBox1: PictureBox;
    createAnArchiveToolStripMenuItem: ToolStripMenuItem;
    panel2: Panel;
    toolStripSeparator1: ToolStripSeparator;
    settingsToolStripMenuItem: ToolStripMenuItem;
    label1: &Label;
    linkLabel4: LinkLabel;
    pictureBox4: PictureBox;
    linkLabel3: LinkLabel;
    pictureBox3: PictureBox;
    addFilesToolStripMenuItem: ToolStripMenuItem;
    unpackToolStripMenuItem: ToolStripMenuItem;
    groupBox2: GroupBox;
    radioButton3: RadioButton;
    pictureBox7: PictureBox;
    radioButton2: RadioButton;
    pictureBox6: PictureBox;
    radioButton1: RadioButton;
    pictureBox5: PictureBox;
    button1: Button;
    groupBox3: GroupBox;
    radioButton4: RadioButton;
    pictureBox8: PictureBox;
    button2: Button;
    linkLabel1: LinkLabel;
    pictureBox2: PictureBox;
    panel1: Panel;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  label1.Text := System.Environment.OSVersion.VersionString + ' on ' + System.Environment.MachineName;
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AboutMicZip).show;
end;

procedure Form1.linkLabel2_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  Form(new CreateArchiveForm).show;
end;

procedure Form1.createAnArchiveToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new CreateArchiveForm).show;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if(radioButton1.Checked) then Form(new CreateArchiveForm).show;
  if(radioButton2.Checked) then Form(new AddFilesForm).show;
  if(radioButton3.Checked) then Form(new UnpackForm).show;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  Form(new AddFilesForm).show;
end;

procedure Form1.addFilesToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AddFilesForm).show;
end;

procedure Form1.linkLabel4_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  Form(new UnpackForm).show;
end;

procedure Form1.unpackToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new UnpackForm).show;
end;

end.
