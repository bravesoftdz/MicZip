procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(AboutMicZip));
        var listViewGroup11: System.Windows.Forms.ListViewGroup := new System.Windows.Forms.ListViewGroup('ListViewGroup', System.Windows.Forms.HorizontalAlignment.Left);
        var listViewItem11: System.Windows.Forms.ListViewItem := new System.Windows.Forms.ListViewItem('7-Zip (7z)');
        var listViewItem12: System.Windows.Forms.ListViewItem := new System.Windows.Forms.ListViewItem(new System.String[1]('RAR (rar) (only unpack)'), -1, System.Drawing.Color.White, System.Drawing.Color.Empty, nil);
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        self.tabPage2 := new System.Windows.Forms.TabPage();
        self.listView1 := new System.Windows.Forms.ListView();
        self.tabPage3 := new System.Windows.Forms.TabPage();
        self.richTextBox2 := new System.Windows.Forms.RichTextBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.tabPage2.SuspendLayout();
        self.tabPage3.SuspendLayout();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(64, 64);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // linkLabel1
        // 
        self.linkLabel1.BackColor := System.Drawing.Color.Transparent;
        self.linkLabel1.Font := new System.Drawing.Font('Lato', 9.749999, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(0)));
        self.linkLabel1.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(155)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.LinkArea := new System.Windows.Forms.LinkArea(26, 15);
        self.linkLabel1.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.Location := new System.Drawing.Point(82, 12);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(190, 67);
        self.linkLabel1.TabIndex := 1;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'MicZip'#13#10'Version 1.2'#13#10#13#10'By Michael Agarkov';
        self.linkLabel1.UseCompatibleTextRendering := true;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // tabControl1
        // 
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Controls.Add(self.tabPage2);
        self.tabControl1.Controls.Add(self.tabPage3);
        self.tabControl1.Location := new System.Drawing.Point(12, 82);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(260, 167);
        self.tabControl1.TabIndex := 2;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.richTextBox1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(252, 141);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'License';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // richTextBox1
        // 
        self.richTextBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox1.Location := new System.Drawing.Point(3, 3);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.ReadOnly := true;
        self.richTextBox1.Size := new System.Drawing.Size(246, 135);
        self.richTextBox1.TabIndex := 0;
        self.richTextBox1.Text := resources.GetString('richTextBox1.Text');
        // 
        // tabPage2
        // 
        self.tabPage2.Controls.Add(self.listView1);
        self.tabPage2.Location := new System.Drawing.Point(4, 22);
        self.tabPage2.Name := 'tabPage2';
        self.tabPage2.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage2.Size := new System.Drawing.Size(252, 141);
        self.tabPage2.TabIndex := 1;
        self.tabPage2.Text := 'Supported formats';
        self.tabPage2.UseVisualStyleBackColor := true;
        // 
        // listView1
        // 
        self.listView1.BackgroundImage := (System.Drawing.Image(resources.GetObject('listView1.BackgroundImage')));
        self.listView1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.listView1.Font := new System.Drawing.Font('Segoe UI', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.listView1.ForeColor := System.Drawing.Color.White;
        self.listView1.FullRowSelect := true;
        listViewGroup11.Header := 'ListViewGroup';
        listViewGroup11.Name := 'All supported formats';
        self.listView1.Groups.AddRange(new System.Windows.Forms.ListViewGroup[1](listViewGroup11));
        self.listView1.HeaderStyle := System.Windows.Forms.ColumnHeaderStyle.Nonclickable;
        self.listView1.Items.AddRange(new System.Windows.Forms.ListViewItem[2](listViewItem11, listViewItem12));
        self.listView1.LabelWrap := false;
        self.listView1.Location := new System.Drawing.Point(3, 3);
        self.listView1.Name := 'listView1';
        self.listView1.Size := new System.Drawing.Size(246, 135);
        self.listView1.TabIndex := 0;
        self.listView1.UseCompatibleStateImageBehavior := false;
        self.listView1.View := System.Windows.Forms.View.Tile;
        // 
        // tabPage3
        // 
        self.tabPage3.Controls.Add(self.richTextBox2);
        self.tabPage3.Location := new System.Drawing.Point(4, 22);
        self.tabPage3.Name := 'tabPage3';
        self.tabPage3.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage3.Size := new System.Drawing.Size(252, 141);
        self.tabPage3.TabIndex := 2;
        self.tabPage3.Text := 'Information';
        self.tabPage3.UseVisualStyleBackColor := true;
        // 
        // richTextBox2
        // 
        self.richTextBox2.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox2.Location := new System.Drawing.Point(3, 3);
        self.richTextBox2.Name := 'richTextBox2';
        self.richTextBox2.ReadOnly := true;
        self.richTextBox2.Size := new System.Drawing.Size(246, 135);
        self.richTextBox2.TabIndex := 1;
        self.richTextBox2.Text := resources.GetString('richTextBox2.Text');
        // 
        // AboutMicZip
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.linkLabel1);
        self.Controls.Add(self.pictureBox1);
        self.DoubleBuffered := true;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'AboutMicZip';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'About MicZip';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.tabPage2.ResumeLayout(false);
        self.tabPage3.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
