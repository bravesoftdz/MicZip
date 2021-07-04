procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(AddFilesForm));
        self.panel1 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.openFileDialog2 := new System.Windows.Forms.OpenFileDialog();
        self.label3 := new System.Windows.Forms.Label();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.label1);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(284, 36);
        self.panel1.TabIndex := 1;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(40, 2);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(241, 32);
        self.label1.TabIndex := 1;
        self.label1.Text := 'Add files';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(2, 2);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(32, 32);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // button1
        // 
        self.button1.Enabled := false;
        self.button1.Location := new System.Drawing.Point(197, 226);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Add';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(12, 226);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Cancel';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(248, 40);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(24, 23);
        self.button3.TabIndex := 7;
        self.button3.Text := '...';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(64, 42);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(178, 20);
        self.textBox1.TabIndex := 9;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(12, 45);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(46, 13);
        self.label2.TabIndex := 8;
        self.label2.Text := 'Archive:';
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := '7z';
        self.openFileDialog1.FileName := 'Archive';
        self.openFileDialog1.Filter := 'All supported formats|*.7z|7-Zip archive|*.7z';
        self.openFileDialog1.Title := 'Select there archive where to add files';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // listBox1
        // 
        self.listBox1.FormattingEnabled := true;
        self.listBox1.HorizontalScrollbar := true;
        self.listBox1.Location := new System.Drawing.Point(6, 19);
        self.listBox1.Name := 'listBox1';
        self.listBox1.ScrollAlwaysVisible := true;
        self.listBox1.Size := new System.Drawing.Size(248, 95);
        self.listBox1.TabIndex := 10;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(6, 120);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 11;
        self.button4.Text := 'Add a file';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(179, 120);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(75, 23);
        self.button5.TabIndex := 12;
        self.button5.Text := 'Remove';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.listBox1);
        self.groupBox1.Controls.Add(self.button4);
        self.groupBox1.Controls.Add(self.button5);
        self.groupBox1.Location := new System.Drawing.Point(12, 69);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(260, 151);
        self.groupBox1.TabIndex := 13;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Files';
        // 
        // openFileDialog2
        // 
        self.openFileDialog2.FileName := 'File';
        self.openFileDialog2.Filter := 'All files|*.*';
        self.openFileDialog2.Title := 'Select a file to add';
        self.openFileDialog2.FileOk += openFileDialog2_FileOk;
        // 
        // label3
        // 
        self.label3.ForeColor := System.Drawing.Color.Red;
        self.label3.Location := new System.Drawing.Point(93, 226);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(103, 23);
        self.label3.TabIndex := 16;
        self.label3.Text := 'Please add files';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        self.label3.Visible := false;
        // 
        // AddFilesForm
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'AddFilesForm';
        self.ShowIcon := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Add files';
        self.Load += Form1_Load;
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
