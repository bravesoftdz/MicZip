procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.micZipToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.createAnArchiveToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.addFilesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.unpackToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.settingsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.panel1 := new System.Windows.Forms.Panel();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.linkLabel4 := new System.Windows.Forms.LinkLabel();
        self.pictureBox4 := new System.Windows.Forms.PictureBox();
        self.linkLabel3 := new System.Windows.Forms.LinkLabel();
        self.pictureBox3 := new System.Windows.Forms.PictureBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.linkLabel2 := new System.Windows.Forms.LinkLabel();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.panel2 := new System.Windows.Forms.Panel();
        self.groupBox3 := new System.Windows.Forms.GroupBox();
        self.button2 := new System.Windows.Forms.Button();
        self.radioButton4 := new System.Windows.Forms.RadioButton();
        self.pictureBox8 := new System.Windows.Forms.PictureBox();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.button1 := new System.Windows.Forms.Button();
        self.radioButton3 := new System.Windows.Forms.RadioButton();
        self.pictureBox7 := new System.Windows.Forms.PictureBox();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.pictureBox6 := new System.Windows.Forms.PictureBox();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.pictureBox5 := new System.Windows.Forms.PictureBox();
        self.label1 := new System.Windows.Forms.Label();
        self.menuStrip1.SuspendLayout();
        self.panel1.SuspendLayout();
        self.groupBox1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.panel2.SuspendLayout();
        self.groupBox3.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox8)).BeginInit();
        self.groupBox2.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox7)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox6)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox5)).BeginInit();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.micZipToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(434, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // micZipToolStripMenuItem
        // 
        self.micZipToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[5](self.createAnArchiveToolStripMenuItem, self.addFilesToolStripMenuItem, self.unpackToolStripMenuItem, self.toolStripSeparator1, self.settingsToolStripMenuItem));
        self.micZipToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.micZipToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('micZipToolStripMenuItem.Image')));
        self.micZipToolStripMenuItem.Name := 'micZipToolStripMenuItem';
        self.micZipToolStripMenuItem.Size := new System.Drawing.Size(72, 20);
        self.micZipToolStripMenuItem.Text := 'MicZip';
        // 
        // createAnArchiveToolStripMenuItem
        // 
        self.createAnArchiveToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('createAnArchiveToolStripMenuItem.Image')));
        self.createAnArchiveToolStripMenuItem.Name := 'createAnArchiveToolStripMenuItem';
        self.createAnArchiveToolStripMenuItem.Size := new System.Drawing.Size(165, 22);
        self.createAnArchiveToolStripMenuItem.Text := 'Create an archive';
        self.createAnArchiveToolStripMenuItem.Click += createAnArchiveToolStripMenuItem_Click;
        // 
        // addFilesToolStripMenuItem
        // 
        self.addFilesToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('addFilesToolStripMenuItem.Image')));
        self.addFilesToolStripMenuItem.Name := 'addFilesToolStripMenuItem';
        self.addFilesToolStripMenuItem.Size := new System.Drawing.Size(165, 22);
        self.addFilesToolStripMenuItem.Text := 'Add files';
        self.addFilesToolStripMenuItem.Click += addFilesToolStripMenuItem_Click;
        // 
        // unpackToolStripMenuItem
        // 
        self.unpackToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('unpackToolStripMenuItem.Image')));
        self.unpackToolStripMenuItem.Name := 'unpackToolStripMenuItem';
        self.unpackToolStripMenuItem.Size := new System.Drawing.Size(165, 22);
        self.unpackToolStripMenuItem.Text := 'Unpack';
        self.unpackToolStripMenuItem.Click += unpackToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(162, 6);
        // 
        // settingsToolStripMenuItem
        // 
        self.settingsToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('settingsToolStripMenuItem.Image')));
        self.settingsToolStripMenuItem.Name := 'settingsToolStripMenuItem';
        self.settingsToolStripMenuItem.Size := new System.Drawing.Size(165, 22);
        self.settingsToolStripMenuItem.Text := 'Settings';
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.groupBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Left;
        self.panel1.Location := new System.Drawing.Point(0, 24);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(130, 287);
        self.panel1.TabIndex := 1;
        // 
        // groupBox1
        // 
        self.groupBox1.BackColor := System.Drawing.Color.Transparent;
        self.groupBox1.Controls.Add(self.linkLabel4);
        self.groupBox1.Controls.Add(self.pictureBox4);
        self.groupBox1.Controls.Add(self.linkLabel3);
        self.groupBox1.Controls.Add(self.pictureBox3);
        self.groupBox1.Controls.Add(self.linkLabel1);
        self.groupBox1.Controls.Add(self.pictureBox2);
        self.groupBox1.Controls.Add(self.linkLabel2);
        self.groupBox1.Controls.Add(self.pictureBox1);
        self.groupBox1.ForeColor := System.Drawing.Color.White;
        self.groupBox1.Location := new System.Drawing.Point(3, 64);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(124, 100);
        self.groupBox1.TabIndex := 2;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Actions';
        // 
        // linkLabel4
        // 
        self.linkLabel4.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel4.Location := new System.Drawing.Point(24, 54);
        self.linkLabel4.Name := 'linkLabel4';
        self.linkLabel4.Size := new System.Drawing.Size(94, 16);
        self.linkLabel4.TabIndex := 7;
        self.linkLabel4.TabStop := true;
        self.linkLabel4.Text := 'Unpack';
        self.linkLabel4.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel4.LinkClicked += linkLabel4_LinkClicked;
        // 
        // pictureBox4
        // 
        self.pictureBox4.Image := (System.Drawing.Image(resources.GetObject('pictureBox4.Image')));
        self.pictureBox4.Location := new System.Drawing.Point(6, 54);
        self.pictureBox4.Name := 'pictureBox4';
        self.pictureBox4.Size := new System.Drawing.Size(16, 16);
        self.pictureBox4.TabIndex := 8;
        self.pictureBox4.TabStop := false;
        // 
        // linkLabel3
        // 
        self.linkLabel3.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel3.Location := new System.Drawing.Point(24, 35);
        self.linkLabel3.Name := 'linkLabel3';
        self.linkLabel3.Size := new System.Drawing.Size(94, 16);
        self.linkLabel3.TabIndex := 5;
        self.linkLabel3.TabStop := true;
        self.linkLabel3.Text := 'Add files';
        self.linkLabel3.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel3.LinkClicked += linkLabel3_LinkClicked;
        // 
        // pictureBox3
        // 
        self.pictureBox3.Image := (System.Drawing.Image(resources.GetObject('pictureBox3.Image')));
        self.pictureBox3.Location := new System.Drawing.Point(6, 35);
        self.pictureBox3.Name := 'pictureBox3';
        self.pictureBox3.Size := new System.Drawing.Size(16, 16);
        self.pictureBox3.TabIndex := 6;
        self.pictureBox3.TabStop := false;
        // 
        // linkLabel1
        // 
        self.linkLabel1.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.Location := new System.Drawing.Point(24, 78);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(94, 16);
        self.linkLabel1.TabIndex := 2;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'Settings';
        self.linkLabel1.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // pictureBox2
        // 
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(6, 78);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(16, 16);
        self.pictureBox2.TabIndex := 4;
        self.pictureBox2.TabStop := false;
        // 
        // linkLabel2
        // 
        self.linkLabel2.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel2.Location := new System.Drawing.Point(24, 16);
        self.linkLabel2.Name := 'linkLabel2';
        self.linkLabel2.Size := new System.Drawing.Size(94, 16);
        self.linkLabel2.TabIndex := 0;
        self.linkLabel2.TabStop := true;
        self.linkLabel2.Text := 'Create an archive';
        self.linkLabel2.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.linkLabel2.LinkClicked += linkLabel2_LinkClicked;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(6, 16);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(16, 16);
        self.pictureBox1.TabIndex := 2;
        self.pictureBox1.TabStop := false;
        // 
        // panel2
        // 
        self.panel2.AutoScroll := true;
        self.panel2.Controls.Add(self.groupBox3);
        self.panel2.Controls.Add(self.groupBox2);
        self.panel2.Controls.Add(self.label1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel2.Location := new System.Drawing.Point(130, 24);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(304, 287);
        self.panel2.TabIndex := 2;
        // 
        // groupBox3
        // 
        self.groupBox3.Controls.Add(self.button2);
        self.groupBox3.Controls.Add(self.radioButton4);
        self.groupBox3.Controls.Add(self.pictureBox8);
        self.groupBox3.Location := new System.Drawing.Point(6, 213);
        self.groupBox3.Name := 'groupBox3';
        self.groupBox3.Size := new System.Drawing.Size(274, 97);
        self.groupBox3.TabIndex := 10;
        self.groupBox3.TabStop := false;
        self.groupBox3.Text := 'Other';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(193, 68);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 10;
        self.button2.Text := 'Do';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // radioButton4
        // 
        self.radioButton4.Checked := true;
        self.radioButton4.Location := new System.Drawing.Point(54, 28);
        self.radioButton4.Name := 'radioButton4';
        self.radioButton4.Size := new System.Drawing.Size(214, 24);
        self.radioButton4.TabIndex := 10;
        self.radioButton4.TabStop := true;
        self.radioButton4.Text := 'Open settings';
        self.radioButton4.UseVisualStyleBackColor := true;
        // 
        // pictureBox8
        // 
        self.pictureBox8.Image := (System.Drawing.Image(resources.GetObject('pictureBox8.Image')));
        self.pictureBox8.Location := new System.Drawing.Point(6, 19);
        self.pictureBox8.Name := 'pictureBox8';
        self.pictureBox8.Size := new System.Drawing.Size(42, 42);
        self.pictureBox8.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox8.TabIndex := 11;
        self.pictureBox8.TabStop := false;
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.button1);
        self.groupBox2.Controls.Add(self.radioButton3);
        self.groupBox2.Controls.Add(self.pictureBox7);
        self.groupBox2.Controls.Add(self.radioButton2);
        self.groupBox2.Controls.Add(self.pictureBox6);
        self.groupBox2.Controls.Add(self.radioButton1);
        self.groupBox2.Controls.Add(self.pictureBox5);
        self.groupBox2.Location := new System.Drawing.Point(6, 6);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(274, 201);
        self.groupBox2.TabIndex := 9;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'MicZip';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(193, 172);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 9;
        self.button1.Text := 'Do';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // radioButton3
        // 
        self.radioButton3.Location := new System.Drawing.Point(54, 124);
        self.radioButton3.Name := 'radioButton3';
        self.radioButton3.Size := new System.Drawing.Size(214, 24);
        self.radioButton3.TabIndex := 7;
        self.radioButton3.Text := 'Unpack';
        self.radioButton3.UseVisualStyleBackColor := true;
        // 
        // pictureBox7
        // 
        self.pictureBox7.Image := (System.Drawing.Image(resources.GetObject('pictureBox7.Image')));
        self.pictureBox7.Location := new System.Drawing.Point(6, 115);
        self.pictureBox7.Name := 'pictureBox7';
        self.pictureBox7.Size := new System.Drawing.Size(42, 42);
        self.pictureBox7.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox7.TabIndex := 8;
        self.pictureBox7.TabStop := false;
        // 
        // radioButton2
        // 
        self.radioButton2.Location := new System.Drawing.Point(54, 76);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(214, 24);
        self.radioButton2.TabIndex := 5;
        self.radioButton2.Text := 'Add files';
        self.radioButton2.UseVisualStyleBackColor := true;
        // 
        // pictureBox6
        // 
        self.pictureBox6.Image := (System.Drawing.Image(resources.GetObject('pictureBox6.Image')));
        self.pictureBox6.Location := new System.Drawing.Point(6, 67);
        self.pictureBox6.Name := 'pictureBox6';
        self.pictureBox6.Size := new System.Drawing.Size(42, 42);
        self.pictureBox6.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox6.TabIndex := 6;
        self.pictureBox6.TabStop := false;
        // 
        // radioButton1
        // 
        self.radioButton1.Checked := true;
        self.radioButton1.Location := new System.Drawing.Point(54, 28);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(214, 24);
        self.radioButton1.TabIndex := 3;
        self.radioButton1.TabStop := true;
        self.radioButton1.Text := 'Create an archive';
        self.radioButton1.UseVisualStyleBackColor := true;
        // 
        // pictureBox5
        // 
        self.pictureBox5.Image := (System.Drawing.Image(resources.GetObject('pictureBox5.Image')));
        self.pictureBox5.Location := new System.Drawing.Point(6, 19);
        self.pictureBox5.Name := 'pictureBox5';
        self.pictureBox5.Size := new System.Drawing.Size(42, 42);
        self.pictureBox5.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox5.TabIndex := 4;
        self.pictureBox5.TabStop := false;
        // 
        // label1
        // 
        self.label1.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 6.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(0, 310);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(287, 12);
        self.label1.TabIndex := 8;
        self.label1.Text := 'OS Version on Machine Name';
        self.label1.TextAlign := System.Drawing.ContentAlignment.BottomRight;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(434, 311);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.panel1);
        self.Controls.Add(self.menuStrip1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicZip';
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.panel1.ResumeLayout(false);
        self.groupBox1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.panel2.ResumeLayout(false);
        self.groupBox3.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox8)).EndInit();
        self.groupBox2.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox7)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox6)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox5)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
