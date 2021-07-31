using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculatorBasic
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double n1 = double.Parse(textBox1.Text);
            double n2 = double.Parse(textBox2.Text);
            double answer = 0;

            if (radioButton1.Checked==true)
            {
                answer = n1 + n2; 
            }
            if (radioButton2.Checked == true)
            {
                answer = n1 - n2;
            }
            if (radioButton3.Checked == true)
            {
                answer = n1 * n2;
            }
            if (radioButton4.Checked == true)
            {
                answer = n1 / n2;
            }

            textBox4.Text = answer.ToString();
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
