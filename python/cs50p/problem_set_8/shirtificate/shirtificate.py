from fpdf import FPDF

name = input("Enter name: ")
pdf = FPDF(orientation="P", unit="mm", format="A4")
pdf.add_page()
pdf.image("shirtificate.png", x=0, y=0)
pdf.set_font('helvetica', size=12)
pdf.cell(text="CS50 Shirtificate")
pdf.cell(text=name)
pdf.output("shirtificate.pdf")
