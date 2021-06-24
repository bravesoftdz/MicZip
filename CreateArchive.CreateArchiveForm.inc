procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(CreateArchiveForm));
        self.panel1 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.label3 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button3 := new System.Windows.Forms.Button();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.openFileDialog2 := new System.Windows.Forms.OpenFileDialog();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.groupBox1.SuspendLayout();
        self.groupBox2.SuspendLayout();
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
        self.panel1.TabIndex := 0;
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
        self.label1.Text := 'Create an archive';
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
        self.button1.Location := new System.Drawing.Point(197, 281);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Create';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(12, 281);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 2;
        self.button2.Text := 'Cancel';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.comboBox1);
        self.groupBox1.Controls.Add(self.label3);
        self.groupBox1.Location := new System.Drawing.Point(12, 225);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(260, 50);
        self.groupBox1.TabIndex := 4;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Compression';
        // 
        // comboBox1
        // 
        self.comboBox1.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Items.AddRange(new System.Object[3]('None', 'Fast', 'Optimal'));
        self.comboBox1.Location := new System.Drawing.Point(107, 19);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(147, 21);
        self.comboBox1.TabIndex := 7;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 22);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(95, 13);
        self.label3.TabIndex := 6;
        self.label3.Text := 'Compression level:';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(12, 45);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(55, 13);
        self.label2.TabIndex := 5;
        self.label2.Text := 'File name:';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(73, 42);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(169, 20);
        self.textBox1.TabIndex := 6;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(248, 40);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(24, 23);
        self.button3.TabIndex := 0;
        self.button3.Text := '...';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.DefaultExt := 'zip';
        self.saveFileDialog1.FileName := 'Archive';
        self.saveFileDialog1.Filter := 'ZIP folder|*.zip';
        self.saveFileDialog1.Title := 'Select where to create the archive';
        self.saveFileDialog1.FileOk += saveFileDialog1_FileOk;
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.listBox1);
        self.groupBox2.Controls.Add(self.button4);
        self.groupBox2.Controls.Add(self.button5);
        self.groupBox2.Location := new System.Drawing.Point(12, 68);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(260, 151);
        self.groupBox2.TabIndex := 14;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'Files';
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
        // openFileDialog2
        // 
        self.openFileDialog2.FileName := 'File';
        self.openFileDialog2.Filter := 'All files|*.*';
        self.openFileDialog2.Title := 'Select a file to add';
        self.openFileDialog2.FileOk += openFileDialog2_FileOk;
        // 
        // CreateArchiveForm
        // 
        self.ClientSize := new System.Drawing.Size(284, 316);
        self.Controls.Add(self.groupBox2);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'CreateArchiveForm';
        self.ShowIcon := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Create an archive';
        self.Load += CreateArchiveForm_Load;
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.groupBox1.ResumeLayout(false);
        self.groupBox2.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
