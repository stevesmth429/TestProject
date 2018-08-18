using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using CppWrapper;

namespace CeeDllTestApp
{
    public partial class Form1 : Form
    {
        MyMathFuncsWrapper mymath = new MyMathFuncsWrapper();
        private double c;

        public Form1()
        {
            InitializeComponent();
            c = mymath.initVal;  // access public variable
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            // See managedDllWrapper.cpp for source code
            c = mymath.AddWrapper(c, c);
            Console.WriteLine(c.ToString());
            label1.Text = c.ToString();
        }
    }
}
