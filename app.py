from fpdf import FPDF

pdf = FPDF(orientation="P",unit="mm",format="A4")
pdf.set_title("Test")
pdf.set_author("Frostie")
pdf.add_page()

pdf.set_font("Arial",size=18)
pdf.cell(200,10,text="Hello", ln=1,align="C")
pdf.cell(200,10,text="Welcome to tape master version 1")
pdf.output("test.pdf")