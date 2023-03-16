import java.util.Date;

public class pgmBasicoFactura{
    public static void main(String[] args) {
        Factura f = new Factura();
        f.setFecha(new Date());
        f.setIdFactura("728372");
        f.addItem();
        f.addItem();
        f.addItem();
        f.addItem();
        f.consultarSaldo();
    }
}

class Factura {
    private String idFactura;
    private Date fecha;
    private Double valorTotal;
    private int cantidadItems;

    public Factura(){
        valorTotal = 0d;
        cantidadItems = 0;
    }

    public void addItem(){
        cantidadItems++;
        valorTotal = (double) (2000 * cantidadItems);
        System.out.println("item #️⃣ "+cantidadItems);
    }

    public void consultarSaldo(){
        System.out.println(this.getValorTotal().toString());
    }

    public void setIdFactura(String idFactura) {
        this.idFactura = idFactura;
    }
    public String getIdFactura() {
        return idFactura;
    }
    public void setFecha(Date fecha) {
        this.fecha = fecha;
    }
    public Date getFecha() {
        return fecha;
    }
    public void setValorTotal(Double valorTotal) {
        this.valorTotal = valorTotal;
    }public Double getValorTotal() {
        return valorTotal;
    }
    public void setCantidadItems(int cantidadItems) {
        this.cantidadItems = cantidadItems;
    }
    public int getCantidadItems() {
        return cantidadItems;
    }
}
