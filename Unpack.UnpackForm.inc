procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(UnpackForm));
        self.panel1 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.button3 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.button1 := new System.Windows.Forms.Button();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.button2 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.folderBrowserDialog1 := new System.Windows.Forms.FolderBrowserDialog();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
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
        self.panel1.TabIndex := 2;
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
        self.label1.Text := 'Unpack';
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
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(248, 40);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(24, 23);
        self.button3.TabIndex := 10;
        self.button3.Text := '...';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(64, 42);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(178, 20);
        self.textBox1.TabIndex := 12;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(12, 45);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(46, 13);
        self.label2.TabIndex := 11;
        self.label2.Text := 'Archive:';
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := 'zip';
        self.openFileDialog1.FileName := 'Archive';
        self.openFileDialog1.Filter := 'ZIP folder|*.zip';
        self.openFileDialog1.Title := 'Select what archive to unpack';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(248, 66);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(24, 23);
        self.button1.TabIndex := 13;
        self.button1.Text := '...';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(50, 68);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(192, 20);
        self.textBox2.TabIndex := 15;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(12, 71);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(32, 13);
        self.label3.TabIndex := 14;
        self.label3.Text := 'Path:';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(197, 106);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 16;
        self.button2.Text := 'Unpack';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(12, 106);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 17;
        self.button4.Text := 'Cancel';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // folderBrowserDialog1
        // 
        self.folderBrowserDialog1.Description := 'Select where to unpack the selected archive';
        // 
        // UnpackForm
        // 
        self.ClientSize := new System.Drawing.Size(284, 141);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'UnpackForm';
        self.ShowIcon := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Unpack';
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
