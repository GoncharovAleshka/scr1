// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vscr1_top_tb_ahb__Syms.h"


//======================

void Vscr1_top_tb_ahb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vscr1_top_tb_ahb::traceInit, &Vscr1_top_tb_ahb::traceFull, &Vscr1_top_tb_ahb::traceChg, this);
}
void Vscr1_top_tb_ahb::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vscr1_top_tb_ahb* t=(Vscr1_top_tb_ahb*)userthis;
    Vscr1_top_tb_ahb__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vscr1_top_tb_ahb::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vscr1_top_tb_ahb* t=(Vscr1_top_tb_ahb*)userthis;
    Vscr1_top_tb_ahb__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vscr1_top_tb_ahb::traceInitThis(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vscr1_top_tb_ahb::traceFullThis(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = VL_ULL(0);
}

void Vscr1_top_tb_ahb::traceInitThis__1(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+995,"clk",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb clk",-1);
	vcdp->declBus(c+996,"scr1_top_tb_ahb SCR1_MEM_SIZE",-1,31,0);
	vcdp->declBus(c+997,"scr1_top_tb_ahb SCR1_EXIT_ADDR",-1,31,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb rst_n",-1);
	vcdp->declBit(c+1,"scr1_top_tb_ahb rtc_clk",-1);
	vcdp->declBus(c+960,"scr1_top_tb_ahb irq_lines",-1,15,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb soft_irq",-1);
	vcdp->declBus(c+2,"scr1_top_tb_ahb fuse_mhartid",-1,31,0);
	vcdp->declBus(c+3,"scr1_top_tb_ahb imem_req_ack_stall",-1,31,0);
	vcdp->declBus(c+4,"scr1_top_tb_ahb dmem_req_ack_stall",-1,31,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb test_mode",-1);
	vcdp->declBit(c+5,"scr1_top_tb_ahb trst_n",-1);
	vcdp->declBit(c+6,"scr1_top_tb_ahb tck",-1);
	vcdp->declBit(c+7,"scr1_top_tb_ahb tms",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb tdi",-1);
	vcdp->declBit(c+603,"scr1_top_tb_ahb tdo",-1);
	vcdp->declBit(c+604,"scr1_top_tb_ahb tdo_en",-1);
	vcdp->declBus(c+9,"scr1_top_tb_ahb imem_hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb imem_hburst",-1,2,0);
	vcdp->declBus(c+1000,"scr1_top_tb_ahb imem_hsize",-1,2,0);
	vcdp->declBus(c+242,"scr1_top_tb_ahb imem_htrans",-1,1,0);
	vcdp->declBus(c+243,"scr1_top_tb_ahb imem_haddr",-1,31,0);
	vcdp->declBit(c+130,"scr1_top_tb_ahb imem_hready",-1);
	vcdp->declBus(c+131,"scr1_top_tb_ahb imem_hrdata",-1,31,0);
	vcdp->declBit(c+132,"scr1_top_tb_ahb imem_hresp",-1);
	vcdp->declBus(c+10,"scr1_top_tb_ahb dmem_hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb dmem_hburst",-1,2,0);
	vcdp->declBus(c+244,"scr1_top_tb_ahb dmem_hsize",-1,2,0);
	vcdp->declBus(c+245,"scr1_top_tb_ahb dmem_htrans",-1,1,0);
	vcdp->declBus(c+246,"scr1_top_tb_ahb dmem_haddr",-1,31,0);
	vcdp->declBit(c+247,"scr1_top_tb_ahb dmem_hwrite",-1);
	vcdp->declBus(c+947,"scr1_top_tb_ahb dmem_hwdata",-1,31,0);
	vcdp->declBit(c+133,"scr1_top_tb_ahb dmem_hready",-1);
	vcdp->declBus(c+134,"scr1_top_tb_ahb dmem_hrdata",-1,31,0);
	vcdp->declBit(c+135,"scr1_top_tb_ahb dmem_hresp",-1);
	vcdp->declBus(c+14,"scr1_top_tb_ahb f_results",-1,31,0);
	vcdp->declBus(c+15,"scr1_top_tb_ahb f_info",-1,31,0);
	// Tracing: scr1_top_tb_ahb s_results // Ignored: Unsupported: strings at /home/P41002_4/scr1_new/scr1/src/tb/scr1_top_tb_ahb.sv:76
	// Tracing: scr1_top_tb_ahb s_info // Ignored: Unsupported: strings at /home/P41002_4/scr1_new/scr1/src/tb/scr1_top_tb_ahb.sv:77
	vcdp->declArray(c+619,"scr1_top_tb_ahb test_file",-1,255,0);
	vcdp->declBit(c+627,"scr1_top_tb_ahb test_running",-1);
	vcdp->declBus(c+628,"scr1_top_tb_ahb tests_passed",-1,31,0);
	vcdp->declBus(c+629,"scr1_top_tb_ahb tests_total",-1,31,0);
	vcdp->declBus(c+630,"scr1_top_tb_ahb rst_cnt",-1,1,0);
	vcdp->declBit(c+631,"scr1_top_tb_ahb rst_init",-1);
	vcdp->declBit(c+632,"scr1_top_tb_ahb unnamedblk1 test_pass",-1);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top pwrup_rst_n",-1);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top rst_n",-1);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top cpu_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top test_rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top clk",-1);
	vcdp->declBit(c+1,"scr1_top_tb_ahb i_top rtc_clk",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top ndm_rst_n_out",-1);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top fuse_mhartid",-1,31,0);
	vcdp->declBus(c+1002,"scr1_top_tb_ahb i_top fuse_idcode",-1,31,0);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_top irq_lines",-1,15,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top soft_irq",-1);
	vcdp->declBit(c+5,"scr1_top_tb_ahb i_top trst_n",-1);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top tck",-1);
	vcdp->declBit(c+7,"scr1_top_tb_ahb i_top tms",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top tdi",-1);
	vcdp->declBit(c+603,"scr1_top_tb_ahb i_top tdo",-1);
	vcdp->declBit(c+604,"scr1_top_tb_ahb i_top tdo_en",-1);
	vcdp->declBus(c+9,"scr1_top_tb_ahb i_top imem_hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb i_top imem_hburst",-1,2,0);
	vcdp->declBus(c+1000,"scr1_top_tb_ahb i_top imem_hsize",-1,2,0);
	vcdp->declBus(c+242,"scr1_top_tb_ahb i_top imem_htrans",-1,1,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top imem_hmastlock",-1);
	vcdp->declBus(c+243,"scr1_top_tb_ahb i_top imem_haddr",-1,31,0);
	vcdp->declBit(c+130,"scr1_top_tb_ahb i_top imem_hready",-1);
	vcdp->declBus(c+131,"scr1_top_tb_ahb i_top imem_hrdata",-1,31,0);
	vcdp->declBit(c+132,"scr1_top_tb_ahb i_top imem_hresp",-1);
	vcdp->declBus(c+10,"scr1_top_tb_ahb i_top dmem_hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb i_top dmem_hburst",-1,2,0);
	vcdp->declBus(c+244,"scr1_top_tb_ahb i_top dmem_hsize",-1,2,0);
	vcdp->declBus(c+245,"scr1_top_tb_ahb i_top dmem_htrans",-1,1,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top dmem_hmastlock",-1);
	vcdp->declBus(c+246,"scr1_top_tb_ahb i_top dmem_haddr",-1,31,0);
	vcdp->declBit(c+247,"scr1_top_tb_ahb i_top dmem_hwrite",-1);
	vcdp->declBus(c+947,"scr1_top_tb_ahb i_top dmem_hwdata",-1,31,0);
	vcdp->declBit(c+133,"scr1_top_tb_ahb i_top dmem_hready",-1);
	vcdp->declBus(c+134,"scr1_top_tb_ahb i_top dmem_hrdata",-1,31,0);
	vcdp->declBit(c+135,"scr1_top_tb_ahb i_top dmem_hresp",-1);
	vcdp->declBit(c+683,"scr1_top_tb_ahb i_top pwrup_rst_n_sync",-1);
	vcdp->declBit(c+684,"scr1_top_tb_ahb i_top rst_n_sync",-1);
	vcdp->declBit(c+685,"scr1_top_tb_ahb i_top cpu_rst_n_sync",-1);
	vcdp->declBit(c+20,"scr1_top_tb_ahb i_top reset_n_sync",-1);
	vcdp->declBit(c+617,"scr1_top_tb_ahb i_top reset_n",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top core_rst_n_local",-1);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top core_imem_req_ack",-1);
	vcdp->declBit(c+249,"scr1_top_tb_ahb i_top core_imem_req",-1);
	vcdp->declBit(c+1003,"scr1_top_tb_ahb i_top core_imem_cmd",-1);
	vcdp->declBus(c+250,"scr1_top_tb_ahb i_top core_imem_addr",-1,31,0);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top core_imem_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top core_imem_resp",-1,1,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top core_dmem_req_ack",-1);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top core_dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top core_dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top core_dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top core_dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top core_dmem_wdata",-1,31,0);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top core_dmem_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top core_dmem_resp",-1,1,0);
	vcdp->declBit(c+789,"scr1_top_tb_ahb i_top ahb_imem_req_ack",-1);
	vcdp->declBit(c+255,"scr1_top_tb_ahb i_top ahb_imem_req",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top ahb_imem_cmd",-1);
	vcdp->declBus(c+256,"scr1_top_tb_ahb i_top ahb_imem_addr",-1,31,0);
	vcdp->declBus(c+136,"scr1_top_tb_ahb i_top ahb_imem_rdata",-1,31,0);
	vcdp->declBus(c+80,"scr1_top_tb_ahb i_top ahb_imem_resp",-1,1,0);
	vcdp->declBit(c+790,"scr1_top_tb_ahb i_top ahb_dmem_req_ack",-1);
	vcdp->declBit(c+257,"scr1_top_tb_ahb i_top ahb_dmem_req",-1);
	vcdp->declBit(c+258,"scr1_top_tb_ahb i_top ahb_dmem_cmd",-1);
	vcdp->declBus(c+259,"scr1_top_tb_ahb i_top ahb_dmem_width",-1,1,0);
	vcdp->declBus(c+260,"scr1_top_tb_ahb i_top ahb_dmem_addr",-1,31,0);
	vcdp->declBus(c+261,"scr1_top_tb_ahb i_top ahb_dmem_wdata",-1,31,0);
	vcdp->declBus(c+137,"scr1_top_tb_ahb i_top ahb_dmem_rdata",-1,31,0);
	vcdp->declBus(c+143,"scr1_top_tb_ahb i_top ahb_dmem_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top tcm_imem_req_ack",-1);
	vcdp->declBit(c+262,"scr1_top_tb_ahb i_top tcm_imem_req",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top tcm_imem_cmd",-1);
	vcdp->declBus(c+263,"scr1_top_tb_ahb i_top tcm_imem_addr",-1,31,0);
	vcdp->declBus(c+633,"scr1_top_tb_ahb i_top tcm_imem_rdata",-1,31,0);
	vcdp->declBus(c+791,"scr1_top_tb_ahb i_top tcm_imem_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top tcm_dmem_req_ack",-1);
	vcdp->declBit(c+264,"scr1_top_tb_ahb i_top tcm_dmem_req",-1);
	vcdp->declBit(c+265,"scr1_top_tb_ahb i_top tcm_dmem_cmd",-1);
	vcdp->declBus(c+266,"scr1_top_tb_ahb i_top tcm_dmem_width",-1,1,0);
	vcdp->declBus(c+267,"scr1_top_tb_ahb i_top tcm_dmem_addr",-1,31,0);
	vcdp->declBus(c+268,"scr1_top_tb_ahb i_top tcm_dmem_wdata",-1,31,0);
	vcdp->declBus(c+634,"scr1_top_tb_ahb i_top tcm_dmem_rdata",-1,31,0);
	vcdp->declBus(c+792,"scr1_top_tb_ahb i_top tcm_dmem_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top timer_dmem_req_ack",-1);
	vcdp->declBit(c+269,"scr1_top_tb_ahb i_top timer_dmem_req",-1);
	vcdp->declBit(c+270,"scr1_top_tb_ahb i_top timer_dmem_cmd",-1);
	vcdp->declBus(c+235,"scr1_top_tb_ahb i_top timer_dmem_width",-1,1,0);
	vcdp->declBus(c+271,"scr1_top_tb_ahb i_top timer_dmem_addr",-1,31,0);
	vcdp->declBus(c+272,"scr1_top_tb_ahb i_top timer_dmem_wdata",-1,31,0);
	vcdp->declBus(c+793,"scr1_top_tb_ahb i_top timer_dmem_rdata",-1,31,0);
	vcdp->declBus(c+794,"scr1_top_tb_ahb i_top timer_dmem_resp",-1,1,0);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top timer_irq",-1);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top timer_val",-1,63,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync test_mode",-1);
	vcdp->declBit(c+683,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n_out",-1);
	vcdp->declBus(c+686,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync rst_n_dff",-1,1,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_pwrup_rstn_reset_sync local_rst_n_in",-1);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_rstn_reset_sync clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_rstn_reset_sync test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_rstn_reset_sync test_mode",-1);
	vcdp->declBit(c+684,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n_out",-1);
	vcdp->declBus(c+687,"scr1_top_tb_ahb i_top i_rstn_reset_sync rst_n_dff",-1,1,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_rstn_reset_sync local_rst_n_in",-1);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync test_mode",-1);
	vcdp->declBit(c+685,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n_out",-1);
	vcdp->declBus(c+688,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync rst_n_dff",-1,1,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_top i_cpu_rstn_reset_sync local_rst_n_in",-1);
	vcdp->declBit(c+20,"scr1_top_tb_ahb i_top i_reset_buf_cell rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_reset_buf_cell clk",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_reset_buf_cell test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_reset_buf_cell test_rst_n",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_in",-1);
	vcdp->declBit(c+617,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_out",-1);
	vcdp->declBit(c+618,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_status",-1);
	vcdp->declBit(c+617,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_ff",-1);
	vcdp->declBit(c+618,"scr1_top_tb_ahb i_top i_reset_buf_cell reset_n_status_ff",-1);
	vcdp->declBit(c+20,"scr1_top_tb_ahb i_top i_reset_buf_cell rst_n_mux",-1);
	vcdp->declBit(c+1004,"scr1_top_tb_ahb i_top i_core_top SCR1_RESET_INPUTS_SYNC",-1);
	vcdp->declBit(c+683,"scr1_top_tb_ahb i_top i_core_top pwrup_rst_n",-1);
	vcdp->declBit(c+684,"scr1_top_tb_ahb i_top i_core_top rst_n",-1);
	vcdp->declBit(c+685,"scr1_top_tb_ahb i_top i_core_top cpu_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top test_rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top clk",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top core_rst_n_out",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top ndm_rst_n_out",-1);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top fuse_mhartid",-1,31,0);
	vcdp->declBus(c+1002,"scr1_top_tb_ahb i_top i_core_top fuse_idcode",-1,31,0);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_top i_core_top irq_lines",-1,15,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top soft_irq",-1);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top timer_irq",-1);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top i_core_top mtime_ext",-1,63,0);
	vcdp->declBit(c+5,"scr1_top_tb_ahb i_top i_core_top trst_n",-1);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top tck",-1);
	vcdp->declBit(c+7,"scr1_top_tb_ahb i_top i_core_top tms",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top tdi",-1);
	vcdp->declBit(c+603,"scr1_top_tb_ahb i_top i_core_top tdo",-1);
	vcdp->declBit(c+604,"scr1_top_tb_ahb i_top i_core_top tdo_en",-1);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top i_core_top imem_req_ack",-1);
	vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top imem_req",-1);
	vcdp->declBit(c+1003,"scr1_top_tb_ahb i_top i_core_top imem_cmd",-1);
	vcdp->declBus(c+250,"scr1_top_tb_ahb i_top i_core_top imem_addr",-1,31,0);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top i_core_top imem_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_core_top imem_resp",-1,1,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top dmem_req_ack",-1);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top i_core_top dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top i_core_top dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top i_core_top dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top dmem_wdata",-1,31,0);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_core_top dmem_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_core_top dmem_resp",-1,1,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top core_rst_n",-1);
	vcdp->declBit(c+562,"scr1_top_tb_ahb i_top i_core_top core_rst_n_qlfy",-1);
	vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top pwrup_rst_n_sync",-1);
	vcdp->declBit(c+1005,"scr1_top_tb_ahb i_top i_core_top rst_n_sync",-1);
	vcdp->declBit(c+1006,"scr1_top_tb_ahb i_top i_core_top cpu_rst_n_sync",-1);
	vcdp->declBit(c+771,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_sel",-1);
	vcdp->declBus(c+772,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_id",-1,1,0);
	vcdp->declBit(c+957,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_capture",-1);
	vcdp->declBit(c+958,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_shift",-1);
	vcdp->declBit(c+705,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_update",-1);
	vcdp->declBit(c+706,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdi",-1);
	vcdp->declBit(c+773,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdo",-1);
	vcdp->declBit(c+122,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_sel_tapout",-1);
	vcdp->declBus(c+123,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_id_tapout",-1,1,0);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_capture_tapout",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_shift_tapout",-1);
	vcdp->declBit(c+955,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_update_tapout",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdi_tapout",-1);
	vcdp->declBit(c+739,"scr1_top_tb_ahb i_top i_core_top tapc_dmi_ch_tdo_tapin",-1);
	vcdp->declBit(c+105,"scr1_top_tb_ahb i_top i_core_top dmi_req",-1);
	vcdp->declBit(c+531,"scr1_top_tb_ahb i_top i_core_top dmi_wr",-1);
	vcdp->declBus(c+106,"scr1_top_tb_ahb i_top i_core_top dmi_addr",-1,6,0);
	vcdp->declBus(c+532,"scr1_top_tb_ahb i_top i_core_top dmi_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top dmi_resp",-1);
	vcdp->declBus(c+533,"scr1_top_tb_ahb i_top i_core_top dmi_rdata",-1,31,0);
	vcdp->declBit(c+707,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_sel",-1);
	vcdp->declBit(c+124,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_sel_tapout",-1);
	vcdp->declBit(c+708,"scr1_top_tb_ahb i_top i_core_top tapc_scu_ch_tdo",-1);
	vcdp->declBit(c+739,"scr1_top_tb_ahb i_top i_core_top tapc_ch_tdo",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top tapc_rst_n",-1);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top hdu_rst_n",-1);
	vcdp->declBit(c+563,"scr1_top_tb_ahb i_top i_core_top hdu_rst_n_qlfy",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top ndm_rst_n",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top dm_rst_n",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top hart_rst_n",-1);
	vcdp->declBit(c+979,"scr1_top_tb_ahb i_top i_core_top dm_active",-1);
	vcdp->declBit(c+774,"scr1_top_tb_ahb i_top i_core_top dm_cmd_req",-1);
	vcdp->declBus(c+775,"scr1_top_tb_ahb i_top i_core_top dm_cmd",-1,1,0);
	vcdp->declBit(c+594,"scr1_top_tb_ahb i_top i_core_top dm_cmd_resp",-1);
	vcdp->declBit(c+595,"scr1_top_tb_ahb i_top i_core_top dm_cmd_resp_qlfy",-1);
	vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top dm_cmd_rcode",-1);
	vcdp->declBit(c+597,"scr1_top_tb_ahb i_top i_core_top dm_cmd_rcode_qlfy",-1);
	vcdp->declBit(c+743,"scr1_top_tb_ahb i_top i_core_top dm_hart_event",-1);
	vcdp->declBit(c+38,"scr1_top_tb_ahb i_top i_core_top dm_hart_event_qlfy",-1);
	vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top dm_hart_status except",-1);
	vcdp->declBit(c+33,"scr1_top_tb_ahb i_top i_core_top dm_hart_status ebreak",-1);
	vcdp->declBus(c+34,"scr1_top_tb_ahb i_top i_core_top dm_hart_status dbg_state",-1,1,0);
	vcdp->declBit(c+565,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy except",-1);
	vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy ebreak",-1);
	vcdp->declBus(c+567,"scr1_top_tb_ahb i_top i_core_top dm_hart_status_qlfy dbg_state",-1,1,0);
	vcdp->declBus(c+744,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_addr",-1,2,0);
	vcdp->declBus(c+568,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_addr_qlfy",-1,2,0);
	vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top dm_pbuf_instr",-1,31,0);
	vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top dm_dreg_req",-1);
	vcdp->declBit(c+274,"scr1_top_tb_ahb i_top i_core_top dm_dreg_req_qlfy",-1);
	vcdp->declBit(c+275,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wr",-1);
	vcdp->declBit(c+276,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wr_qlfy",-1);
	vcdp->declBus(c+277,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wdata",-1,31,0);
	vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top dm_dreg_wdata_qlfy",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top dm_dreg_resp",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top dm_dreg_fail",-1);
	vcdp->declBus(c+635,"scr1_top_tb_ahb i_top i_core_top dm_dreg_rdata",-1,31,0);
	vcdp->declBus(c+798,"scr1_top_tb_ahb i_top i_core_top dm_pc_sample",-1,31,0);
	vcdp->declBus(c+100,"scr1_top_tb_ahb i_top i_core_top dm_pc_sample_qlfy",-1,31,0);
	vcdp->declBit(c+1004,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_CFG_RESET_INPUTS_SYNC",-1);
	vcdp->declBit(c+683,"scr1_top_tb_ahb i_top i_core_top i_scu pwrup_rst_n",-1);
	vcdp->declBit(c+684,"scr1_top_tb_ahb i_top i_core_top i_scu rst_n",-1);
	vcdp->declBit(c+685,"scr1_top_tb_ahb i_top i_core_top i_scu cpu_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu test_rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_scu clk",-1);
	vcdp->declBit(c+707,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_sel",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_id",-1);
	vcdp->declBit(c+957,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_capture",-1);
	vcdp->declBit(c+958,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_shift",-1);
	vcdp->declBit(c+705,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_update",-1);
	vcdp->declBit(c+706,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_tdi",-1);
	vcdp->declBit(c+708,"scr1_top_tb_ahb i_top i_core_top i_scu tapc_ch_tdo",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top i_scu ndm_rst_n",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top i_scu hart_rst_n",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n",-1);
	vcdp->declBit(c+562,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_qlfy",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n",-1);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n",-1);
	vcdp->declBit(c+563,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_qlfy",-1);
	vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_OP_WIDTH",-1,31,0);
	vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+1008,"scr1_top_tb_ahb i_top i_core_top i_scu SCR1_SCU_DR_SYSCTRL_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+709,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg data",-1,3,0);
	vcdp->declBus(c+710,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg addr",-1,1,0);
	vcdp->declBus(c+711,"scr1_top_tb_ahb i_top i_core_top i_scu shift_reg op",-1,1,0);
	vcdp->declBus(c+712,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg data",-1,3,0);
	vcdp->declBus(c+713,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg addr",-1,1,0);
	vcdp->declBus(c+714,"scr1_top_tb_ahb i_top i_core_top i_scu shadow_reg op",-1,1,0);
	vcdp->declBit(c+740,"scr1_top_tb_ahb i_top i_core_top i_scu dr_capture",-1);
	vcdp->declBit(c+741,"scr1_top_tb_ahb i_top i_core_top i_scu dr_shift",-1);
	vcdp->declBit(c+24,"scr1_top_tb_ahb i_top i_core_top i_scu dr_update",-1);
	vcdp->declBus(c+147,"scr1_top_tb_ahb i_top i_core_top i_scu cmd_data",-1,3,0);
	vcdp->declBus(c+148,"scr1_top_tb_ahb i_top i_core_top i_scu reg_data",-1,3,0);
	vcdp->declBus(c+715,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg rsrv",-1,2,0);
	vcdp->declBit(c+716,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg sys_reset",-1);
	vcdp->declBit(c+25,"scr1_top_tb_ahb i_top i_core_top i_scu control_reg_wr",-1);
	vcdp->declBus(c+717,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg rsrv",-1,1,0);
	vcdp->declBit(c+718,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg hdu_rst_mux",-1);
	vcdp->declBit(c+719,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg dm_rst_mux",-1);
	vcdp->declBus(c+720,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r rsrv",-1,1,0);
	vcdp->declBit(c+721,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r hdu_rst_mux",-1);
	vcdp->declBit(c+722,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_r dm_rst_mux",-1);
	vcdp->declBit(c+26,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_wr",-1);
	vcdp->declBit(c+723,"scr1_top_tb_ahb i_top i_core_top i_scu mode_reg_wr_r",-1);
	vcdp->declBit(c+28,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data hdu_reset",-1);
	vcdp->declBit(c+29,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data dm_reset",-1);
	vcdp->declBit(c+30,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data core_reset",-1);
	vcdp->declBit(c+31,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data sys_reset",-1);
	vcdp->declBit(c+724,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly hdu_reset",-1);
	vcdp->declBit(c+725,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly dm_reset",-1);
	vcdp->declBit(c+726,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly core_reset",-1);
	vcdp->declBit(c+727,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_dly sys_reset",-1);
	vcdp->declBit(c+149,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge hdu_reset",-1);
	vcdp->declBit(c+150,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge dm_reset",-1);
	vcdp->declBit(c+151,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge core_reset",-1);
	vcdp->declBit(c+152,"scr1_top_tb_ahb i_top i_core_top i_scu status_reg_data_posedge sys_reset",-1);
	vcdp->declBit(c+728,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg hdu_reset",-1);
	vcdp->declBit(c+729,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg dm_reset",-1);
	vcdp->declBit(c+730,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg core_reset",-1);
	vcdp->declBit(c+731,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg sys_reset",-1);
	vcdp->declBit(c+27,"scr1_top_tb_ahb i_top i_core_top i_scu sticky_sts_reg_wr",-1);
	vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_scu pwrup_rst_n_sync",-1);
	vcdp->declBit(c+684,"scr1_top_tb_ahb i_top i_core_top i_scu rst_n_sync",-1);
	vcdp->declBit(c+685,"scr1_top_tb_ahb i_top i_core_top i_scu cpu_rst_n_sync",-1);
	vcdp->declBit(c+991,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n",-1);
	vcdp->declBit(c+703,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_sync",-1);
	vcdp->declBit(c+992,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_qlfy",-1);
	vcdp->declBit(c+732,"scr1_top_tb_ahb i_top i_core_top i_scu sys_rst_n_status",-1);
	vcdp->declBit(c+279,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_sync",-1);
	vcdp->declBit(c+742,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_qlfy",-1);
	vcdp->declBit(c+615,"scr1_top_tb_ahb i_top i_core_top i_scu dm_rst_n_status",-1);
	vcdp->declBit(c+704,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_sync",-1);
	vcdp->declBit(c+988,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_qlfy_sync",-1);
	vcdp->declBit(c+788,"scr1_top_tb_ahb i_top i_core_top i_scu core_rst_n_status",-1);
	vcdp->declBit(c+280,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_sync",-1);
	vcdp->declBit(c+616,"scr1_top_tb_ahb i_top i_core_top i_scu hdu_rst_n_status",-1);
	vcdp->declBus(c+733,"scr1_top_tb_ahb i_top i_core_top i_scu unnamedblk1 i",-1,31,0);
	vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell test_mode",-1);
	vcdp->declBit(c+703,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_in",-1);
	vcdp->declBit(c+992,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_out_qlfy",-1);
	vcdp->declBit(c+991,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_out",-1);
	vcdp->declBit(c+732,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_status",-1);
	vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell rst_n_mux",-1);
	vcdp->declBit(c+281,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_in_mux",-1);
	vcdp->declBit(c+994,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_front_ff",-1);
	vcdp->declBit(c+993,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_victim_ff",-1);
	vcdp->declBit(c+992,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_qualifier_ff",-1);
	vcdp->declBit(c+991,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_lucky_ff",-1);
	vcdp->declBit(c+732,"scr1_top_tb_ahb i_top i_core_top i_scu i_sys_rstn_buf_qlfy_cell reset_n_status_ff",-1);
	vcdp->declBit(c+279,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell clk",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell test_rst_n",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_in",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_out",-1);
	vcdp->declBit(c+615,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_status",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_ff",-1);
	vcdp->declBit(c+615,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell reset_n_status_ff",-1);
	vcdp->declBit(c+279,"scr1_top_tb_ahb i_top i_core_top i_scu i_dm_rstn_buf_cell rst_n_mux",-1);
	vcdp->declBit(c+991,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell test_mode",-1);
	vcdp->declBit(c+704,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_in",-1);
	vcdp->declBit(c+988,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_out_qlfy",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_out",-1);
	vcdp->declBit(c+788,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_status",-1);
	vcdp->declBit(c+991,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell rst_n_mux",-1);
	vcdp->declBit(c+282,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_in_mux",-1);
	vcdp->declBit(c+990,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_front_ff",-1);
	vcdp->declBit(c+989,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_victim_ff",-1);
	vcdp->declBit(c+988,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_qualifier_ff",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_lucky_ff",-1);
	vcdp->declBit(c+788,"scr1_top_tb_ahb i_top i_core_top i_scu i_core_rstn_buf_qlfy_cell reset_n_status_ff",-1);
	vcdp->declBit(c+280,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell clk",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell test_mode",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell test_rst_n",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_in",-1);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_out",-1);
	vcdp->declBit(c+616,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_status",-1);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_ff",-1);
	vcdp->declBit(c+616,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell reset_n_status_ff",-1);
	vcdp->declBit(c+280,"scr1_top_tb_ahb i_top i_core_top i_scu i_hdu_rstn_buf_cell rst_n_mux",-1);
	vcdp->declBus(c+21,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell rst_n_in",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell test_rst_n",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell test_mode",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc_rstn_and2_cell rst_n_out",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top pipe_rst_n",-1);
	vcdp->declBit(c+562,"scr1_top_tb_ahb i_top i_core_top i_pipe_top pipe_rst_n_qlfy",-1);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top clk",-1);
	vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_req",-1);
	vcdp->declBit(c+1003,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_cmd",-1);
	vcdp->declBus(c+250,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_addr",-1,31,0);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_req_ack",-1);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_core_top i_pipe_top imem_resp",-1,1,0);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_wdata",-1,31,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_req_ack",-1);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dmem_resp",-1,1,0);
	vcdp->declBit(c+979,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_active",-1);
	vcdp->declBit(c+774,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_req",-1);
	vcdp->declBus(c+775,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd",-1,1,0);
	vcdp->declBit(c+594,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_resp",-1);
	vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_cmd_rcode",-1);
	vcdp->declBit(c+743,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_event",-1);
	vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status except",-1);
	vcdp->declBit(c+33,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status ebreak",-1);
	vcdp->declBus(c+34,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_hart_status dbg_state",-1,1,0);
	vcdp->declBus(c+744,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pbuf_addr",-1,2,0);
	vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pbuf_instr",-1,31,0);
	vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_req",-1);
	vcdp->declBit(c+275,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_wr",-1);
	vcdp->declBus(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_resp",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_fail",-1);
	vcdp->declBus(c+635,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_dreg_rdata",-1,31,0);
	vcdp->declBus(c+798,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dm_pc_sample",-1,31,0);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_top i_core_top i_pipe_top irq_lines",-1,15,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top soft_irq",-1);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top i_pipe_top timer_irq",-1);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mtime_ext",-1,63,0);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top fuse_mhartid",-1,31,0);
	vcdp->declBus(c+798,"scr1_top_tb_ahb i_top i_core_top i_pipe_top curr_pc",-1,31,0);
	vcdp->declBus(c+86,"scr1_top_tb_ahb i_top i_core_top i_pipe_top next_pc",-1,31,0);
	vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top new_pc_req",-1);
	vcdp->declBus(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top new_pc",-1,31,0);
	vcdp->declBit(c+285,"scr1_top_tb_ahb i_top i_core_top i_pipe_top stop_fetch",-1);
	vcdp->declBit(c+89,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_exc_req",-1);
	vcdp->declBit(c+236,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt",-1);
	vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_init_pc",-1);
	vcdp->declBit(c+90,"scr1_top_tb_ahb i_top i_core_top i_pipe_top wfi_run2halt",-1);
	vcdp->declBit(c+286,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret",-1);
	vcdp->declBit(c+287,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret_nexc",-1);
	vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ext_irq",-1);
	vcdp->declBit(c+288,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt_hw",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_vd",-1);
	vcdp->declBus(c+170,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_instr",-1,31,0);
	vcdp->declBit(c+171,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_imem_err",-1);
	vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2idu_err_rvi_hi",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2ifu_rdy",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_req",-1);
	vcdp->declBit(c+172,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd instr_rvc",-1);
	vcdp->declBit(c+173,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd ialu_op",-1);
	vcdp->declBus(c+174,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd ialu_cmd",-1,4,0);
	vcdp->declBit(c+175,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd sum2_op",-1);
	vcdp->declBus(c+176,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd lsu_cmd",-1,3,0);
	vcdp->declBit(c+177,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd csr_op",-1);
	vcdp->declBus(c+178,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd csr_cmd",-1,1,0);
	vcdp->declBus(c+179,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rd_wb_sel",-1,2,0);
	vcdp->declBit(c+180,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd jump_req",-1);
	vcdp->declBit(c+181,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd branch_req",-1);
	vcdp->declBit(c+182,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd mret_req",-1);
	vcdp->declBit(c+183,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd fencei_req",-1);
	vcdp->declBit(c+184,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd wfi_req",-1);
	vcdp->declBus(c+185,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rs1_addr",-1,4,0);
	vcdp->declBus(c+186,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rs2_addr",-1,4,0);
	vcdp->declBus(c+187,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd rd_addr",-1,4,0);
	vcdp->declBus(c+188,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd imm",-1,31,0);
	vcdp->declBit(c+189,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd exc_req",-1);
	vcdp->declBus(c+190,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_cmd exc_code",-1,3,0);
	vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rs1",-1);
	vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rs2",-1);
	vcdp->declBit(c+193,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_rd",-1);
	vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top i_pipe_top idu2exu_use_imm",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2idu_rdy",-1);
	vcdp->declBus(c+291,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rs1_addr",-1,4,0);
	vcdp->declBus(c+292,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mprf2exu_rs1_data",-1,31,0);
	vcdp->declBus(c+293,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rs2_addr",-1,4,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top mprf2exu_rs2_data",-1,31,0);
	vcdp->declBit(c+294,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_w_req",-1);
	vcdp->declBus(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rd_addr",-1,4,0);
	vcdp->declBus(c+295,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2mprf_rd_data",-1,31,0);
	vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_rw_addr",-1,11,0);
	vcdp->declBit(c+296,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_r_req",-1);
	vcdp->declBus(c+297,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_r_data",-1,31,0);
	vcdp->declBit(c+298,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_cmd",-1,1,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_w_data",-1,31,0);
	vcdp->declBit(c+300,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_rw_exc",-1);
	vcdp->declBit(c+301,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_take_irq",-1);
	vcdp->declBit(c+302,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_take_exc",-1);
	vcdp->declBit(c+91,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_mret_update",-1);
	vcdp->declBit(c+303,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_mret_instr",-1);
	vcdp->declBus(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_exc_code",-1,3,0);
	vcdp->declBus(c+87,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2csr_trap_val",-1,31,0);
	vcdp->declBus(c+305,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_new_pc",-1,31,0);
	vcdp->declBit(c+45,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_irq",-1);
	vcdp->declBit(c+46,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_ip_ie",-1);
	vcdp->declBit(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2exu_mstatus_mie_up",-1);
	vcdp->declBit(c+307,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_r_req",-1);
	vcdp->declBit(c+308,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_w_req",-1);
	vcdp->declBus(c+309,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_addr",-1,2,0);
	vcdp->declBus(c+310,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2ipic_wdata",-1,31,0);
	vcdp->declBus(c+311,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ipic2csr_rdata",-1,31,0);
	vcdp->declBit(c+312,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_cmd",-1,1,0);
	vcdp->declBus(c+198,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_addr",-1,2,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_wdata",-1,31,0);
	vcdp->declBus(c+313,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2csr_rdata",-1,31,0);
	vcdp->declBit(c+314,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2csr_resp",-1);
	vcdp->declBit(c+315,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_req_qlfy",-1);
	vcdp->declBus(c+589,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_cmd_qlfy",-1,1,0);
	vcdp->declBus(c+590,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_addr_qlfy",-1,2,0);
	vcdp->declBus(c+316,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2tdu_wdata_qlfy",-1,31,0);
	vcdp->declBit(c+317,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon vd",-1);
	vcdp->declBit(c+318,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon req",-1);
	vcdp->declBus(c+319,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon addr",-1,31,0);
	vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon vd",-1);
	vcdp->declBit(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon load",-1);
	vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon store",-1);
	vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon addr",-1,31,0);
	vcdp->declBus(c+320,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2exu_i_match",-1,2,0);
	vcdp->declBus(c+321,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_d_match",-1,1,0);
	vcdp->declBit(c+322,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2exu_i_x_req",-1);
	vcdp->declBit(c+323,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_i_x_req",-1);
	vcdp->declBit(c+324,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2lsu_d_x_req",-1);
	vcdp->declBus(c+325,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_bp_retire",-1,2,0);
	vcdp->declBit(c+326,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy vd",-1);
	vcdp->declBit(c+327,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy req",-1);
	vcdp->declBus(c+328,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_i_mon_qlfy addr",-1,31,0);
	vcdp->declBit(c+329,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy vd",-1);
	vcdp->declBit(c+330,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy load",-1);
	vcdp->declBit(c+331,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy store",-1);
	vcdp->declBus(c+332,"scr1_top_tb_ahb i_top i_core_top i_pipe_top lsu2tdu_d_mon_qlfy addr",-1,31,0);
	vcdp->declBus(c+333,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu2tdu_bp_retire_qlfy",-1,2,0);
	vcdp->declBit(c+961,"scr1_top_tb_ahb i_top i_core_top i_pipe_top fetch_pbuf",-1);
	vcdp->declBit(c+334,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_cmd",-1,1,0);
	vcdp->declBus(c+199,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_addr",-1,1,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_wdata",-1,31,0);
	vcdp->declBus(c+335,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2csr_rdata",-1,31,0);
	vcdp->declBit(c+37,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2csr_resp",-1);
	vcdp->declBit(c+336,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_req_qlfy",-1);
	vcdp->declBus(c+591,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_cmd_qlfy",-1,1,0);
	vcdp->declBus(c+592,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_addr_qlfy",-1,1,0);
	vcdp->declBus(c+337,"scr1_top_tb_ahb i_top i_core_top i_pipe_top csr2hdu_wdata_qlfy",-1,31,0);
	vcdp->declBit(c+962,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hwbrk_dsbl",-1);
	vcdp->declBit(c+338,"scr1_top_tb_ahb i_top i_core_top i_pipe_top tdu2hdu_dmode_req",-1);
	vcdp->declBit(c+339,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_no_commit",-1);
	vcdp->declBit(c+963,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_irq_dsbl",-1);
	vcdp->declBit(c+964,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_pc_advmt_dsbl",-1);
	vcdp->declBit(c+965,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_dmode_sstep_en",-1);
	vcdp->declBit(c+570,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_halted",-1);
	vcdp->declBit(c+340,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_run2halt",-1);
	vcdp->declBit(c+574,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_halt2run",-1);
	vcdp->declBit(c+571,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_run_start",-1);
	vcdp->declBus(c+745,"scr1_top_tb_ahb i_top i_core_top i_pipe_top dbg_new_pc",-1,31,0);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2hdu_pbuf_rdy",-1);
	vcdp->declBit(c+341,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_vd",-1);
	vcdp->declBit(c+35,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_err",-1);
	vcdp->declBus(c+636,"scr1_top_tb_ahb i_top i_core_top i_pipe_top hdu2ifu_pbuf_instr",-1,31,0);
	vcdp->declBit(c+342,"scr1_top_tb_ahb i_top i_core_top i_pipe_top ifu2hdu_pbuf_rdy_qlfy",-1);
	vcdp->declBit(c+343,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_busy",-1);
	vcdp->declBit(c+527,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_busy_qlfy",-1);
	vcdp->declBit(c+528,"scr1_top_tb_ahb i_top i_core_top i_pipe_top instret_qlfy",-1);
	vcdp->declBit(c+588,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_init_pc_qlfy",-1);
	vcdp->declBit(c+344,"scr1_top_tb_ahb i_top i_core_top i_pipe_top exu_exc_req_qlfy",-1);
	vcdp->declBit(c+345,"scr1_top_tb_ahb i_top i_core_top i_pipe_top brkpt_qlfy",-1);
	vcdp->declBus(c+100,"scr1_top_tb_ahb i_top i_core_top i_pipe_top curr_pc_qlfy",-1,31,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu clk",-1);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_req_ack",-1);
	vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_req",-1);
	vcdp->declBit(c+1003,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_cmd",-1);
	vcdp->declBus(c+250,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr",-1,31,0);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp",-1,1,0);
	vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc_req",-1);
	vcdp->declBus(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc",-1,31,0);
	vcdp->declBit(c+285,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu stop_fetch",-1);
	vcdp->declBit(c+961,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu fetch_pbuf",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2hdu_pbuf_rdy",-1);
	vcdp->declBit(c+341,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_vd",-1);
	vcdp->declBit(c+35,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_err",-1);
	vcdp->declBus(c+636,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu hdu2ifu_pbuf_instr",-1,31,0);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu idu2ifu_rdy",-1);
	vcdp->declBus(c+170,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_instr",-1,31,0);
	vcdp->declBit(c+171,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_imem_err",-1);
	vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_err_rvi_hi",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu ifu2idu_vd",-1);
	vcdp->declBus(c+1009,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_SIZE_WORD",-1,31,0);
	vcdp->declBus(c+1010,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_SIZE_HALF",-1,31,0);
	vcdp->declBus(c+1011,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_TXN_CNT_W",-1,31,0);
	vcdp->declBus(c+1009,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_QUEUE_ADR_W",-1,31,0);
	vcdp->declBus(c+1011,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_QUEUE_PTR_W",-1,31,0);
	vcdp->declBus(c+1011,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_FREE_H_W",-1,31,0);
	vcdp->declBus(c+1009,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu SCR1_IFU_Q_FREE_W_W",-1,31,0);
	vcdp->declBit(c+799,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu fsm",-1);
	vcdp->declBus(c+800,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr_r",-1,31,2);
	vcdp->declBus(c+346,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_addr_r_new",-1,31,2);
	vcdp->declBus(c+801,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending",-1,2,0);
	vcdp->declBus(c+347,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending_new",-1,2,0);
	vcdp->declBus(c+802,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp_cnt",-1,2,0);
	vcdp->declBus(c+85,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp_cnt_new",-1,2,0);
	vcdp->declBit(c+803,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu discard_resp",-1);
	vcdp->declBus(c+804,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_vd_txns_pending",-1,2,0);
	vcdp->declBit(c+805,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu num_txns_pending_full",-1);
	vcdp->declBit(c+157,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_ok",-1);
	vcdp->declBit(c+158,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_er",-1);
	vcdp->declBit(c+159,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu imem_resp_vd",-1);
	vcdp->declBit(c+806,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu new_pc_unaligned",-1);
	vcdp->declBit(c+47,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_empty",-1);
	vcdp->declBit(c+348,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_flush",-1);
	vcdp->declBus(c+807,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_rptr",-1,2,0);
	vcdp->declBus(c+349,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_rptr_next",-1,2,0);
	vcdp->declBus(c+808,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_wptr",-1,2,0);
	vcdp->declBus(c+160,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_wptr_next",-1,2,0);
	vcdp->declBus(c+48,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_ocpd_h",-1,2,0);
	vcdp->declBus(c+92,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_free_h_next",-1,2,0);
	vcdp->declBus(c+93,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_free_w_next",-1,1,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus(c+809+i*1,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data",(i+0),15,0);}}
	{int i; for (i=0; i<4; i++) {
		vcdp->declBit(c+813+i*1,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err",(i+0));}}
	vcdp->declBus(c+350,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_re",-1,1,0);
	vcdp->declBus(c+161,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_we",-1,1,0);
	vcdp->declBit(c+49,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_head_rvc",-1);
	vcdp->declBit(c+50,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_head_rvi",-1);
	vcdp->declBus(c+51,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data_head",-1,15,0);
	vcdp->declBus(c+817,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_data_next",-1,15,0);
	vcdp->declBit(c+52,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err_head",-1);
	vcdp->declBit(c+53,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu q_err_next",-1);
	vcdp->declBit(c+818,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_curr",-1);
	vcdp->declBit(c+162,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_next",-1);
	vcdp->declBus(c+163,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ifu rdata_ident",-1,2,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu clk",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2ifu_rdy",-1);
	vcdp->declBus(c+170,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_instr",-1,31,0);
	vcdp->declBit(c+171,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_imem_err",-1);
	vcdp->declBit(c+44,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_err_rvi_hi",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu ifu2idu_vd",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_req",-1);
	vcdp->declBit(c+172,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd instr_rvc",-1);
	vcdp->declBit(c+173,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd ialu_op",-1);
	vcdp->declBus(c+174,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd ialu_cmd",-1,4,0);
	vcdp->declBit(c+175,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd sum2_op",-1);
	vcdp->declBus(c+176,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd lsu_cmd",-1,3,0);
	vcdp->declBit(c+177,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd csr_op",-1);
	vcdp->declBus(c+178,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd csr_cmd",-1,1,0);
	vcdp->declBus(c+179,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rd_wb_sel",-1,2,0);
	vcdp->declBit(c+180,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd jump_req",-1);
	vcdp->declBit(c+181,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd branch_req",-1);
	vcdp->declBit(c+182,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd mret_req",-1);
	vcdp->declBit(c+183,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd fencei_req",-1);
	vcdp->declBit(c+184,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd wfi_req",-1);
	vcdp->declBus(c+185,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rs1_addr",-1,4,0);
	vcdp->declBus(c+186,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rs2_addr",-1,4,0);
	vcdp->declBus(c+187,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd rd_addr",-1,4,0);
	vcdp->declBus(c+188,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd imm",-1,31,0);
	vcdp->declBit(c+189,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd exc_req",-1);
	vcdp->declBus(c+190,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_cmd exc_code",-1,3,0);
	vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rs1",-1);
	vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rs2",-1);
	vcdp->declBit(c+193,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_rd",-1);
	vcdp->declBit(c+194,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu idu2exu_use_imm",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu exu2idu_rdy",-1);
	vcdp->declBus(c+1012,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_ZERO_ADDR",-1,4,0);
	vcdp->declBus(c+1013,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_RA_ADDR",-1,4,0);
	vcdp->declBus(c+1014,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu SCR1_MPRF_SP_ADDR",-1,4,0);
	vcdp->declBus(c+170,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu instr",-1,31,0);
	vcdp->declBus(c+200,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu instr_type",-1,1,0);
	vcdp->declBus(c+201,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvi_opcode",-1,6,2);
	vcdp->declBit(c+202,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvi_illegal",-1);
	vcdp->declBus(c+203,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct3",-1,2,0);
	vcdp->declBus(c+204,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct7",-1,6,0);
	vcdp->declBus(c+205,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu funct12",-1,11,0);
	vcdp->declBus(c+206,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu shamt",-1,4,0);
	vcdp->declBit(c+207,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_idu rvc_illegal",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu clk",-1);
	vcdp->declBit(c+289,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_req",-1);
	vcdp->declBit(c+290,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2idu_rdy",-1);
	vcdp->declBit(c+172,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd instr_rvc",-1);
	vcdp->declBit(c+173,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd ialu_op",-1);
	vcdp->declBus(c+174,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd ialu_cmd",-1,4,0);
	vcdp->declBit(c+175,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd sum2_op",-1);
	vcdp->declBus(c+176,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd lsu_cmd",-1,3,0);
	vcdp->declBit(c+177,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd csr_op",-1);
	vcdp->declBus(c+178,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd csr_cmd",-1,1,0);
	vcdp->declBus(c+179,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rd_wb_sel",-1,2,0);
	vcdp->declBit(c+180,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd jump_req",-1);
	vcdp->declBit(c+181,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd branch_req",-1);
	vcdp->declBit(c+182,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd mret_req",-1);
	vcdp->declBit(c+183,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd fencei_req",-1);
	vcdp->declBit(c+184,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd wfi_req",-1);
	vcdp->declBus(c+185,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rs1_addr",-1,4,0);
	vcdp->declBus(c+186,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rs2_addr",-1,4,0);
	vcdp->declBus(c+187,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd rd_addr",-1,4,0);
	vcdp->declBus(c+188,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd imm",-1,31,0);
	vcdp->declBit(c+189,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd exc_req",-1);
	vcdp->declBus(c+190,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_cmd exc_code",-1,3,0);
	vcdp->declBit(c+191,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_use_rs1",-1);
	vcdp->declBit(c+192,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu idu2exu_use_rs2",-1);
	vcdp->declBus(c+291,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rs1_addr",-1,4,0);
	vcdp->declBus(c+292,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu mprf2exu_rs1_data",-1,31,0);
	vcdp->declBus(c+293,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rs2_addr",-1,4,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu mprf2exu_rs2_data",-1,31,0);
	vcdp->declBit(c+294,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_w_req",-1);
	vcdp->declBus(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rd_addr",-1,4,0);
	vcdp->declBus(c+295,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2mprf_rd_data",-1,31,0);
	vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_rw_addr",-1,11,0);
	vcdp->declBit(c+296,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_r_req",-1);
	vcdp->declBus(c+297,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_r_data",-1,31,0);
	vcdp->declBit(c+298,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_cmd",-1,1,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_w_data",-1,31,0);
	vcdp->declBit(c+300,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_rw_exc",-1);
	vcdp->declBit(c+301,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_take_irq",-1);
	vcdp->declBit(c+302,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_take_exc",-1);
	vcdp->declBit(c+91,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_mret_update",-1);
	vcdp->declBit(c+303,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_mret_instr",-1);
	vcdp->declBus(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_exc_code",-1,3,0);
	vcdp->declBus(c+87,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2csr_trap_val",-1,31,0);
	vcdp->declBus(c+305,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_new_pc",-1,31,0);
	vcdp->declBit(c+45,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_irq",-1);
	vcdp->declBit(c+46,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_ip_ie",-1);
	vcdp->declBit(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr2exu_mstatus_mie_up",-1);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2dmem_wdata",-1,31,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_req_ack",-1);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dmem2exu_resp",-1,1,0);
	vcdp->declBit(c+89,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_exc_req",-1);
	vcdp->declBit(c+236,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu brkpt",-1);
	vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_init_pc",-1);
	vcdp->declBit(c+90,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run2halt",-1);
	vcdp->declBit(c+286,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu instret",-1);
	vcdp->declBit(c+287,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu instret_nexc",-1);
	vcdp->declBit(c+343,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_busy",-1);
	vcdp->declBit(c+339,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_no_commit",-1);
	vcdp->declBit(c+963,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_irq_dsbl",-1);
	vcdp->declBit(c+964,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_pc_advmt_dsbl",-1);
	vcdp->declBit(c+965,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_dmode_sstep_en",-1);
	vcdp->declBit(c+961,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu fetch_pbuf",-1);
	vcdp->declBit(c+570,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_halted",-1);
	vcdp->declBit(c+340,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_run2halt",-1);
	vcdp->declBit(c+574,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_halt2run",-1);
	vcdp->declBit(c+571,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_run_start",-1);
	vcdp->declBus(c+745,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu dbg_new_pc",-1,31,0);
	vcdp->declBit(c+317,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon vd",-1);
	vcdp->declBit(c+318,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon req",-1);
	vcdp->declBus(c+319,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_i_mon addr",-1,31,0);
	vcdp->declBus(c+320,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2exu_i_match",-1,2,0);
	vcdp->declBit(c+322,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2exu_i_x_req",-1);
	vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon vd",-1);
	vcdp->declBit(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon load",-1);
	vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon store",-1);
	vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu2tdu_d_mon addr",-1,31,0);
	vcdp->declBit(c+323,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_i_x_req",-1);
	vcdp->declBus(c+321,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_d_match",-1,1,0);
	vcdp->declBit(c+324,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu tdu2lsu_d_x_req",-1);
	vcdp->declBus(c+325,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu2tdu_bp_retire",-1,2,0);
	vcdp->declBit(c+288,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu brkpt_hw",-1);
	vcdp->declBus(c+798,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu curr_pc",-1,31,0);
	vcdp->declBus(c+86,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu next_pc",-1,31,0);
	vcdp->declBit(c+283,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu new_pc_req",-1);
	vcdp->declBus(c+284,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu new_pc",-1,31,0);
	vcdp->declBus(c+1015,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu SCR1_JUMP_MASK",-1,31,0);
	vcdp->declBit(c+351,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue_vd",-1);
	vcdp->declBit(c+208,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue instr_rvc",-1);
	vcdp->declBit(c+209,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue ialu_op",-1);
	vcdp->declBus(c+210,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue ialu_cmd",-1,4,0);
	vcdp->declBit(c+211,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue sum2_op",-1);
	vcdp->declBus(c+212,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue lsu_cmd",-1,3,0);
	vcdp->declBit(c+213,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue csr_op",-1);
	vcdp->declBus(c+214,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue csr_cmd",-1,1,0);
	vcdp->declBus(c+215,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rd_wb_sel",-1,2,0);
	vcdp->declBit(c+216,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue jump_req",-1);
	vcdp->declBit(c+217,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue branch_req",-1);
	vcdp->declBit(c+218,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue mret_req",-1);
	vcdp->declBit(c+219,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue fencei_req",-1);
	vcdp->declBit(c+220,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue wfi_req",-1);
	vcdp->declBus(c+221,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rs1_addr",-1,4,0);
	vcdp->declBus(c+222,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rs2_addr",-1,4,0);
	vcdp->declBus(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue rd_addr",-1,4,0);
	vcdp->declBus(c+223,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue imm",-1,31,0);
	vcdp->declBit(c+224,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue exc_req",-1);
	vcdp->declBus(c+225,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_queue exc_code",-1,3,0);
	vcdp->declBit(c+593,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu queue_barrier",-1);
	vcdp->declBit(c+352,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_rdy",-1);
	vcdp->declBit(c+353,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_rdy",-1);
	vcdp->declBit(c+354,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_vd",-1);
	vcdp->declBus(c+355,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_op1",-1,31,0);
	vcdp->declBus(c+356,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_op2",-1,31,0);
	vcdp->declBus(c+88,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_op1",-1,31,0);
	vcdp->declBus(c+226,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_op2",-1,31,0);
	vcdp->declBus(c+357,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_res",-1,31,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_sum2_res",-1,31,0);
	vcdp->declBit(c+358,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ialu_cmp",-1);
	vcdp->declBit(c+359,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_req",-1);
	vcdp->declBit(c+164,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_rdy",-1);
	vcdp->declBus(c+84,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_l_data",-1,31,0);
	vcdp->declBit(c+360,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_exc",-1);
	vcdp->declBus(c+361,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu lsu_exc_code",-1,3,0);
	vcdp->declBit(c+819,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu csr_access",-1);
	vcdp->declBit(c+362,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exc_req",-1);
	vcdp->declBus(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exc_code",-1,3,0);
	vcdp->declBit(c+227,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu ifu_fault_rvi_hi",-1);
	vcdp->declBit(c+820,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_halted",-1);
	vcdp->declBit(c+363,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_halt_cond",-1);
	vcdp->declBit(c+46,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run_cond",-1);
	vcdp->declBit(c+821,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu wfi_run_start",-1);
	vcdp->declBus(c+822,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu init_pc_v",-1,3,0);
	vcdp->declBit(c+42,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu init_pc",-1);
	vcdp->declBus(c+228,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu inc_pc",-1,31,0);
	vcdp->declBit(c+823,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu exu_exc_req_r",-1);
	vcdp->declBus(c+241,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu update_pc",-1,31,0);
	vcdp->declBit(c+82,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu update_pc_en",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu clk",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu rst_n",-1);
	vcdp->declBit(c+354,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_vd",-1);
	vcdp->declBit(c+353,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_rdy",-1);
	vcdp->declBus(c+355,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_op1",-1,31,0);
	vcdp->declBus(c+356,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_op2",-1,31,0);
	vcdp->declBus(c+229,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_cmd",-1,4,0);
	vcdp->declBus(c+357,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_res",-1,31,0);
	vcdp->declBit(c+358,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_cmp",-1);
	vcdp->declBus(c+88,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_op1",-1,31,0);
	vcdp->declBus(c+226,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_op2",-1,31,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu ialu_sum2_res",-1,31,0);
	vcdp->declBus(c+1016,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu SCR1_DIV_WIDTH",-1,31,0);
	vcdp->declBus(c+1017,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu SCR1_DIV_INIT_CNT",-1,31,0);
	vcdp->declBus(c+824,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu curr_state",-1,1,0);
	vcdp->declBus(c+364,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu next_state",-1,1,0);
	vcdp->declBit(c+365,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu iter_req",-1);
	vcdp->declBit(c+366,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu iter_rdy",-1);
	vcdp->declBus(c+230,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mdu_cmd",-1,1,0);
	vcdp->declBus(c+367,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_cmd",-1,1,0);
	vcdp->declBus(c+368,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu div_cmd",-1,1,0);
	vcdp->declBit(c+369,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu corr_req",-1);
	vcdp->declBit(c+370,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_sub",-1);
	vcdp->declBus(c+371,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_op1",-1,31,0);
	vcdp->declBus(c+372,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_op2",-1,31,0);
	vcdp->declQuad(c+373,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_res",-1,32,0);
	vcdp->declBit(c+375,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags z",-1);
	vcdp->declBit(c+376,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags s",-1);
	vcdp->declBit(c+377,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags o",-1);
	vcdp->declBit(c+378,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum1_flags c",-1);
	vcdp->declBit(c+379,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_sub",-1);
	vcdp->declQuad(c+380,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_op1",-1,32,0);
	vcdp->declQuad(c+382,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_op2",-1,32,0);
	vcdp->declQuad(c+384,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu sum2_res",-1,32,0);
	vcdp->declBus(c+386,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_op1",-1,31,0);
	vcdp->declBus(c+387,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_op2",-1,4,0);
	vcdp->declBus(c+231,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_cmd",-1,1,0);
	vcdp->declBus(c+388,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu shft_res",-1,31,0);
	vcdp->declQuad(c+389,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_op1",-1,32,0);
	vcdp->declQuad(c+391,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_op2",-1,32,0);
	vcdp->declQuad(c+393,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu mul_res",-1,63,0);
	vcdp->declBus(c+395,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu cnt_res",-1,4,0);
	vcdp->declBus(c+637,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu cnt_res_reg",-1,4,0);
	vcdp->declBit(c+396,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_c",-1);
	vcdp->declBit(c+638,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_c_reg",-1);
	vcdp->declBus(c+397,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1",-1,31,0);
	vcdp->declBus(c+639,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_1_reg",-1,31,0);
	vcdp->declBus(c+398,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_2",-1,31,0);
	vcdp->declBus(c+640,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_2_reg",-1,31,0);
	vcdp->declBus(c+399,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_3",-1,31,0);
	vcdp->declBus(c+641,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu res32_3_reg",-1,31,0);
	vcdp->declBit(c+400,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk1 sgn",-1);
	vcdp->declBit(c+401,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk1 inv",-1);
	vcdp->declBit(c+402,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk2 sgn",-1);
	vcdp->declBit(c+403,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk2 inv",-1);
	vcdp->declBus(c+404,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk3 prev_low",-1,30,0);
	vcdp->declBit(c+405,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_ialu unnamedblk3 quo",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu clk",-1);
	vcdp->declBit(c+359,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_req",-1);
	vcdp->declBus(c+232,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_cmd",-1,3,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu exu2lsu_s_data",-1,31,0);
	vcdp->declBit(c+164,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_rdy",-1);
	vcdp->declBus(c+84,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_l_data",-1,31,0);
	vcdp->declBit(c+360,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_exc",-1);
	vcdp->declBus(c+361,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2exu_exc_code",-1,3,0);
	vcdp->declBit(c+237,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon vd",-1);
	vcdp->declBit(c+238,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon load",-1);
	vcdp->declBit(c+239,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon store",-1);
	vcdp->declBus(c+240,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2tdu_d_mon addr",-1,31,0);
	vcdp->declBit(c+323,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu tdu2lsu_i_x_req",-1);
	vcdp->declBit(c+324,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu tdu2lsu_d_x_req",-1);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu2dmem_wdata",-1,31,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_req_ack",-1);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem2lsu_resp",-1,1,0);
	vcdp->declBit(c+825,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu fsm",-1);
	vcdp->declBus(c+826,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu_cmd_r",-1,3,0);
	vcdp->declBit(c+165,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem_resp_ok",-1);
	vcdp->declBit(c+166,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu dmem_resp_er",-1);
	vcdp->declBit(c+406,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu l_misalign",-1);
	vcdp->declBit(c+407,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu s_misalign",-1);
	vcdp->declBit(c+408,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_exu i_lsu lsu_hwbrk",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf clk",-1);
	vcdp->declBus(c+291,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rs1_addr",-1,4,0);
	vcdp->declBus(c+292,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf2exu_rs1_data",-1,31,0);
	vcdp->declBus(c+293,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rs2_addr",-1,4,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf2exu_rs2_data",-1,31,0);
	vcdp->declBit(c+294,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_w_req",-1);
	vcdp->declBus(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rd_addr",-1,4,0);
	vcdp->declBus(c+295,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf exu2mprf_rd_data",-1,31,0);
	vcdp->declBus(c+827,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(1)",-1,31,0);
	vcdp->declBus(c+828,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(2)",-1,31,0);
	vcdp->declBus(c+829,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(3)",-1,31,0);
	vcdp->declBus(c+830,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(4)",-1,31,0);
	vcdp->declBus(c+831,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(5)",-1,31,0);
	vcdp->declBus(c+832,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(6)",-1,31,0);
	vcdp->declBus(c+833,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(7)",-1,31,0);
	vcdp->declBus(c+834,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(8)",-1,31,0);
	vcdp->declBus(c+835,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(9)",-1,31,0);
	vcdp->declBus(c+836,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(10)",-1,31,0);
	vcdp->declBus(c+837,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(11)",-1,31,0);
	vcdp->declBus(c+838,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(12)",-1,31,0);
	vcdp->declBus(c+839,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(13)",-1,31,0);
	vcdp->declBus(c+840,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(14)",-1,31,0);
	vcdp->declBus(c+841,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(15)",-1,31,0);
	vcdp->declBus(c+842,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(16)",-1,31,0);
	vcdp->declBus(c+843,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(17)",-1,31,0);
	vcdp->declBus(c+844,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(18)",-1,31,0);
	vcdp->declBus(c+845,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(19)",-1,31,0);
	vcdp->declBus(c+846,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(20)",-1,31,0);
	vcdp->declBus(c+847,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(21)",-1,31,0);
	vcdp->declBus(c+848,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(22)",-1,31,0);
	vcdp->declBus(c+849,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(23)",-1,31,0);
	vcdp->declBus(c+850,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(24)",-1,31,0);
	vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(25)",-1,31,0);
	vcdp->declBus(c+852,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(26)",-1,31,0);
	vcdp->declBus(c+853,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(27)",-1,31,0);
	vcdp->declBus(c+854,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(28)",-1,31,0);
	vcdp->declBus(c+855,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(29)",-1,31,0);
	vcdp->declBus(c+856,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(30)",-1,31,0);
	vcdp->declBus(c+857,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_mprf mprf_int(31)",-1,31,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr clk",-1);
	vcdp->declBit(c+296,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_r_req",-1);
	vcdp->declBus(c+196,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_rw_addr",-1,11,0);
	vcdp->declBus(c+297,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_r_data",-1,31,0);
	vcdp->declBit(c+298,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_cmd",-1,1,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_w_data",-1,31,0);
	vcdp->declBit(c+300,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_rw_exc",-1);
	vcdp->declBit(c+301,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_take_irq",-1);
	vcdp->declBit(c+302,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_take_exc",-1);
	vcdp->declBit(c+91,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_mret_update",-1);
	vcdp->declBit(c+303,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_mret_instr",-1);
	vcdp->declBit(c+339,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu_no_commit",-1);
	vcdp->declBus(c+304,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_exc_code",-1,3,0);
	vcdp->declBus(c+87,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr exu2csr_trap_val",-1,31,0);
	vcdp->declBus(c+305,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_new_pc",-1,31,0);
	vcdp->declBit(c+45,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_irq",-1);
	vcdp->declBit(c+46,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_ip_ie",-1);
	vcdp->declBit(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2exu_mstatus_mie_up",-1);
	vcdp->declBit(c+307,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_r_req",-1);
	vcdp->declBit(c+308,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_w_req",-1);
	vcdp->declBus(c+309,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_addr",-1,2,0);
	vcdp->declBus(c+310,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2ipic_wdata",-1,31,0);
	vcdp->declBus(c+311,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr ipic2csr_rdata",-1,31,0);
	vcdp->declBus(c+798,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr curr_pc",-1,31,0);
	vcdp->declBus(c+86,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr next_pc",-1,31,0);
	vcdp->declBit(c+287,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr instret_nexc",-1);
	vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr ext_irq",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr soft_irq",-1);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr timer_irq",-1);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr mtime_ext",-1,63,0);
	vcdp->declBit(c+334,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_cmd",-1,1,0);
	vcdp->declBus(c+199,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_addr",-1,1,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2hdu_wdata",-1,31,0);
	vcdp->declBus(c+335,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr hdu2csr_rdata",-1,31,0);
	vcdp->declBit(c+37,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr hdu2csr_resp",-1);
	vcdp->declBit(c+312,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_req",-1);
	vcdp->declBus(c+197,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_cmd",-1,1,0);
	vcdp->declBus(c+198,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_addr",-1,2,0);
	vcdp->declBus(c+299,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr2tdu_wdata",-1,31,0);
	vcdp->declBus(c+313,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr tdu2csr_rdata",-1,31,0);
	vcdp->declBit(c+314,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr tdu2csr_resp",-1);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr fuse_mhartid",-1,31,0);
	vcdp->declBus(c+54,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus",-1,31,0);
	vcdp->declBus(c+55,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie",-1,31,0);
	vcdp->declBus(c+56,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip",-1,31,0);
	vcdp->declBit(c+858,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_mie",-1);
	vcdp->declBit(c+859,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_mpie",-1);
	vcdp->declBit(c+860,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_mtie",-1);
	vcdp->declBit(c+861,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_meie",-1);
	vcdp->declBit(c+862,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_msie",-1);
	vcdp->declBus(c+863,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mscratch",-1,31,0);
	vcdp->declBus(c+864,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mepc",-1,31,1);
	vcdp->declBit(c+865,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_i",-1);
	vcdp->declBus(c+866,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_ec",-1,3,0);
	vcdp->declBus(c+57,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_ec_new",-1,3,0);
	vcdp->declBus(c+867,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtval",-1,31,0);
	vcdp->declBus(c+868,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_base",-1,31,6);
	vcdp->declBit(c+869,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_mode",-1);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_mtip",-1);
	vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_meip",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mip_msip",-1);
	vcdp->declQuad(c+58,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret",-1,63,0);
	vcdp->declQuad(c+870,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_hi",-1,63,8);
	vcdp->declQuad(c+409,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_hi_new",-1,63,8);
	vcdp->declBus(c+872,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_lo",-1,7,0);
	vcdp->declBus(c+411,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_lo_new",-1,7,0);
	vcdp->declQuad(c+60,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle",-1,63,0);
	vcdp->declQuad(c+873,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_hi",-1,63,8);
	vcdp->declQuad(c+412,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_hi_new",-1,63,8);
	vcdp->declBus(c+875,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_lo",-1,7,0);
	vcdp->declBus(c+414,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_lo_new",-1,7,0);
	vcdp->declBus(c+62,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten",-1,31,0);
	vcdp->declBit(c+876,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_cy",-1);
	vcdp->declBit(c+877,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_ir",-1);
	vcdp->declBus(c+297,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_r_data",-1,31,0);
	vcdp->declBit(c+415,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_r_exc",-1);
	vcdp->declBit(c+416,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mstatus_up",-1);
	vcdp->declBit(c+417,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mie_up",-1);
	vcdp->declBit(c+418,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mscratch_up",-1);
	vcdp->declBit(c+419,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mepc_up",-1);
	vcdp->declBit(c+420,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcause_up",-1);
	vcdp->declBit(c+421,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtval_up",-1);
	vcdp->declBit(c+422,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mtvec_up",-1);
	vcdp->declBus(c+423,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_up",-1,1,0);
	vcdp->declBus(c+424,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_up",-1,1,0);
	vcdp->declBit(c+876,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_inc_lo",-1);
	vcdp->declBit(c+63,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_cycle_inc_hi",-1);
	vcdp->declBit(c+425,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_inc_lo",-1);
	vcdp->declBit(c+426,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_instret_inc_hi",-1);
	vcdp->declBit(c+427,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_mcounten_up",-1);
	vcdp->declBus(c+428,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_w_data",-1,31,0);
	vcdp->declBit(c+429,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_w_exc",-1);
	vcdp->declBit(c+430,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_exc",-1);
	vcdp->declBit(c+431,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_irq",-1);
	vcdp->declBit(c+432,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr e_mret",-1);
	vcdp->declBit(c+233,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_hdu_req",-1);
	vcdp->declBit(c+234,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_csr csr_brkm_req",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic clk",-1);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines",-1,15,0);
	vcdp->declBit(c+307,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_r_req",-1);
	vcdp->declBit(c+308,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_w_req",-1);
	vcdp->declBus(c+309,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_addr",-1,2,0);
	vcdp->declBus(c+310,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic csr2ipic_wdata",-1,31,0);
	vcdp->declBus(c+311,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipic2csr_rdata",-1,31,0);
	vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_m_req",-1);
	vcdp->declBus(c+878,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines_i",-1,15,0);
	vcdp->declBus(c+879,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_edge_det",-1,15,0);
	vcdp->declBus(c+433,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lvl",-1,15,0);
	vcdp->declBus(c+880,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic invr",-1,15,0);
	vcdp->declBus(c+434,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic invr_new",-1,15,0);
	vcdp->declBus(c+1018,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_vect",-1,15,0);
	vcdp->declBus(c+881,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic imr",-1,15,0);
	vcdp->declBus(c+435,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic imr_new",-1,15,0);
	vcdp->declBus(c+882,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr",-1,15,0);
	vcdp->declBus(c+436,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_new",-1,15,0);
	vcdp->declBus(c+882,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_m",-1,15,0);
	vcdp->declBus(c+437,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ipr_clr",-1,15,0);
	vcdp->declBus(c+883,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic ier",-1,15,0);
	vcdp->declBus(c+884,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irr_m",-1,15,0);
	vcdp->declBus(c+885,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cisv_m",-1,4,0);
	vcdp->declBus(c+886,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic idxr_m",-1,3,0);
	vcdp->declBus(c+887,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic isvr_m",-1,15,0);
	vcdp->declBit(c+438,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic soi_wr_m",-1);
	vcdp->declBit(c+439,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic eoi_wr_m",-1);
	vcdp->declBit(c+64,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m ip",-1);
	vcdp->declBit(c+65,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m ie",-1);
	vcdp->declBit(c+66,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m im",-1);
	vcdp->declBit(c+67,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m inv",-1);
	vcdp->declBit(c+68,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m is",-1);
	vcdp->declBus(c+69,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic icsr_m line",-1,3,0);
	vcdp->declBit(c+70,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cicsr_m ip",-1);
	vcdp->declBit(c+71,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic cicsr_m ie",-1);
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irr_priority_m // Ignored: Unsupported: Unpacked struct/union at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_ipic.sv:151
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic isvr_priority_eoi_m // Ignored: Unsupported: Unpacked struct/union at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_ipic.sv:152
	vcdp->declBus(c+72,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic isvr_eoi_m",-1,15,0);
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic gen_i // Ignored: Verilator trace_off at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_ipic.sv:156
	vcdp->declBus(c+888,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic irq_lines_sync0",-1,15,0);
	vcdp->declBit(c+440,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk8 cisv_found",-1);
	vcdp->declBus(c+441,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk8 unnamedblk9 i",-1,31,0);
	vcdp->declBus(c+442,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk10 i",-1,31,0);
	vcdp->declBus(c+1019,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk11 i",-1,31,0);
	vcdp->declBus(c+1019,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk12 i",-1,31,0);
	vcdp->declBus(c+889,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_ipic unnamedblk13 i",-1,31,0);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en",-1);
	vcdp->declBit(c+962,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu dsbl",-1);
	vcdp->declBit(c+315,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_req",-1);
	vcdp->declBus(c+589,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_cmd",-1,1,0);
	vcdp->declBus(c+590,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_addr",-1,2,0);
	vcdp->declBus(c+316,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_wdata",-1,31,0);
	vcdp->declBus(c+313,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_rdata",-1,31,0);
	vcdp->declBit(c+314,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr2tdu_resp",-1);
	vcdp->declBit(c+326,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon vd",-1);
	vcdp->declBit(c+327,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon req",-1);
	vcdp->declBus(c+328,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_i_mon addr",-1,31,0);
	vcdp->declBus(c+320,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2exu_i_match",-1,2,0);
	vcdp->declBit(c+322,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2exu_i_x_req",-1);
	vcdp->declBit(c+323,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_i_x_req",-1);
	vcdp->declBit(c+329,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon vd",-1);
	vcdp->declBit(c+330,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon load",-1);
	vcdp->declBit(c+331,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon store",-1);
	vcdp->declBus(c+332,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_mon addr",-1,31,0);
	vcdp->declBus(c+321,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_match",-1,1,0);
	vcdp->declBit(c+324,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2lsu_d_x_req",-1);
	vcdp->declBus(c+333,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu exu2tdu_bp_retire",-1,2,0);
	vcdp->declBit(c+338,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdu2hdu_dmode_req",-1);
	vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu MTRIG_NUM",-1,31,0);
	vcdp->declBus(c+1020,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu ALLTRIG_NUM",-1,31,0);
	vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu ALLTRIG_W",-1,31,0);
	vcdp->declBus(c+746,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tselect_ff",-1,1,0);
	vcdp->declBus(c+642,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdata2(0)",-1,31,0);
	vcdp->declBus(c+643,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu tdata2(1)",-1,31,0);
	vcdp->declBit(c+443,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_tselect_cmb",-1);
	vcdp->declBus(c+444,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_mcontrol_cmb",-1,1,0);
	vcdp->declBus(c+445,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_tdata2_cmb",-1,1,0);
	vcdp->declBit(c+446,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_wr_cmb",-1);
	vcdp->declBus(c+447,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_wr_data_cmb",-1,31,0);
	vcdp->declBus(c+448,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en_mcontrol_cmb",-1,1,0);
	vcdp->declBus(c+747,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_dmode_ff",-1,1,0);
	vcdp->declBus(c+449,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_execution_hit_cmb",-1,1,0);
	vcdp->declBus(c+321,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_ldst_hit_cmb",-1,1,0);
	vcdp->declBus(c+748,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_action_ff",-1,1,0);
	vcdp->declBus(c+1021,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_match_ff(0)",-1,1,0);
	vcdp->declBus(c+1022,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_match_ff(1)",-1,1,0);
	vcdp->declBus(c+749,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_hit_ff",-1,1,0);
	vcdp->declBus(c+750,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_m_ff",-1,1,0);
	vcdp->declBus(c+751,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_execution_ff",-1,1,0);
	vcdp->declBus(c+752,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_load_ff",-1,1,0);
	vcdp->declBus(c+753,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_store_ff",-1,1,0);
	vcdp->declBus(c+145,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu mcontrol_write_en",-1,1,0);
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu gvar_trig // Ignored: Verilator trace_off at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_pipe_tdu.sv:70
	vcdp->declBit(c+450,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu csr_addr_icount_cmb",-1);
	vcdp->declBit(c+451,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu clk_en_icount_cmb",-1);
	vcdp->declBit(c+452,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_decrement_cmb",-1);
	vcdp->declBit(c+453,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_hit_cmb",-1);
	vcdp->declBit(c+754,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_skip_ff",-1);
	vcdp->declBit(c+755,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_dmode_ff",-1);
	vcdp->declBit(c+756,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_action_ff",-1);
	vcdp->declBit(c+757,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_hit_ff",-1);
	vcdp->declBit(c+758,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_m_ff",-1);
	vcdp->declBus(c+759,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_count_ff",-1,13,0);
	vcdp->declBit(c+146,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu icount_write_en",-1);
	vcdp->declBus(c+454,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk1 i",-1,31,0);
	vcdp->declBus(c+455,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk2 i",-1,31,0);
	vcdp->declBus(c+456,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk3 i",-1,31,0);
	vcdp->declBus(c+1007,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_tdu unnamedblk4 i",-1,31,0);
	vcdp->declBus(c+1023,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu HART_PBUF_INSTR_REGOUT_EN",-1,0,0);
	vcdp->declBit(c+981,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu clk",-1);
	vcdp->declBit(c+979,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu clk_en",-1);
	vcdp->declBit(c+336,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_req",-1);
	vcdp->declBus(c+591,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_cmd",-1,1,0);
	vcdp->declBus(c+592,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_addr",-1,1,0);
	vcdp->declBus(c+337,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wdata",-1,31,0);
	vcdp->declBit(c+37,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_resp",-1);
	vcdp->declBus(c+335,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_rdata",-1,31,0);
	vcdp->declBit(c+562,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pipe_rst_n_qlfy",-1);
	vcdp->declBit(c+774,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_req",-1);
	vcdp->declBus(c+775,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd",-1,1,0);
	vcdp->declBit(c+594,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_resp",-1);
	vcdp->declBit(c+596,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_cmd_rcode",-1);
	vcdp->declBit(c+743,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_event",-1);
	vcdp->declBit(c+32,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status except",-1);
	vcdp->declBit(c+33,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status ebreak",-1);
	vcdp->declBus(c+34,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_hart_status dbg_state",-1,1,0);
	vcdp->declBus(c+744,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_pbuf_addr",-1,2,0);
	vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_pbuf_instr",-1,31,0);
	vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_req",-1);
	vcdp->declBit(c+275,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_wr",-1);
	vcdp->declBus(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_resp",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_fail",-1);
	vcdp->declBus(c+635,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dm_dreg_rdata",-1,31,0);
	vcdp->declBit(c+962,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_hwbrk_dsbl",-1);
	vcdp->declBit(c+338,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_tm_dmode_req",-1);
	vcdp->declBit(c+288,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_brkpt_hw",-1);
	vcdp->declBit(c+527,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_busy",-1);
	vcdp->declBit(c+528,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_instret",-1);
	vcdp->declBit(c+588,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_init_pc",-1);
	vcdp->declBit(c+344,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_exc_req",-1);
	vcdp->declBit(c+345,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_brkpt",-1);
	vcdp->declBit(c+961,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_fetch_pbuf",-1);
	vcdp->declBit(c+339,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_no_commit",-1);
	vcdp->declBit(c+963,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_irq_dsbl",-1);
	vcdp->declBit(c+964,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_pc_advmt_dsbl",-1);
	vcdp->declBit(c+965,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_exu_dmode_sstep_en",-1);
	vcdp->declBit(c+570,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_halted",-1);
	vcdp->declBit(c+340,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_run2halt",-1);
	vcdp->declBit(c+574,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_halt2run",-1);
	vcdp->declBit(c+571,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_dbg_run_start",-1);
	vcdp->declBus(c+100,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pc",-1,31,0);
	vcdp->declBus(c+745,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_new_pc",-1,31,0);
	vcdp->declBit(c+342,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_rdy",-1);
	vcdp->declBit(c+341,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_vd",-1);
	vcdp->declBit(c+35,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr_err",-1);
	vcdp->declBus(c+636,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_pbuf_instr",-1,31,0);
	vcdp->declBus(c+1024,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu SCR1_HDU_TIMEOUT",-1,31,0);
	vcdp->declBus(c+1025,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu SCR1_HDU_TIMEOUT_WIDTH",-1,31,0);
	vcdp->declBus(c+760,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbg_state",-1,1,0);
	vcdp->declBus(c+598,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbg_state_next",-1,1,0);
	vcdp->declBit(c+761,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_trans",-1);
	vcdp->declBit(c+457,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_trans_next",-1);
	vcdp->declBit(c+762,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_update",-1);
	vcdp->declBit(c+458,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_update_next",-1);
	vcdp->declBit(c+743,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_event",-1);
	vcdp->declBit(c+599,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_event_next",-1);
	vcdp->declBit(c+600,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_csr_update",-1);
	vcdp->declBit(c+575,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_cmd_req",-1);
	vcdp->declBit(c+576,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_pbuf_start_fetch",-1);
	vcdp->declBit(c+577,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_rctl_wr",-1);
	vcdp->declBit(c+572,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dfsm_rctl_clr",-1);
	vcdp->declBit(c+763,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltstatus except",-1);
	vcdp->declBus(c+764,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltstatus cause",-1,2,0);
	vcdp->declBus(c+529,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_haltcause",-1,2,0);
	vcdp->declBit(c+578,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_halt_req",-1);
	vcdp->declBit(c+340,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_halt_ack",-1);
	vcdp->declBit(c+579,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_resume_req",-1);
	vcdp->declBit(c+1026,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_cmd_rcode",-1);
	vcdp->declBit(c+167,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_cmd_rctl",-1);
	vcdp->declBit(c+966,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl irq_dsbl",-1);
	vcdp->declBit(c+967,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl fetch_src",-1);
	vcdp->declBit(c+968,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl pc_advmt_dsbl",-1);
	vcdp->declBit(c+969,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl hwbrkpt_dsbl",-1);
	vcdp->declBit(c+970,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl redirect sstep",-1);
	vcdp->declBit(c+971,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu hart_runctrl redirect ebreak",-1);
	vcdp->declBit(c+459,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_sstep",-1);
	vcdp->declBit(c+460,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_except",-1);
	vcdp->declBit(c+461,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_ebreak",-1);
	vcdp->declBit(c+462,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dmode_cause_tmreq",-1);
	vcdp->declBus(c+765,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbgc_timeout_cnt",-1,5,0);
	vcdp->declBit(c+766,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu dbgc_timeout_flag",-1);
	vcdp->declBus(c+767,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_state",-1,1,0);
	vcdp->declBus(c+463,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_state_next",-1,1,0);
	vcdp->declBus(c+744,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_addr",-1,2,0);
	vcdp->declBus(c+464,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_addr_next",-1,2,0);
	vcdp->declBit(c+768,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu pbuf_instr_wait_latching",-1);
	vcdp->declBit(c+465,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wr",-1);
	vcdp->declBus(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_wr_data",-1,31,0);
	vcdp->declBus(c+335,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_rd_data",-1,31,0);
	vcdp->declBit(c+466,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_sel",-1);
	vcdp->declBit(c+467,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_wr",-1);
	vcdp->declBus(c+468,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in xdebugver",-1,3,0);
	vcdp->declBus(c+469,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv3",-1,11,0);
	vcdp->declBit(c+470,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in ebreakm",-1);
	vcdp->declBus(c+471,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv2",-1,2,0);
	vcdp->declBit(c+472,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in stepie",-1);
	vcdp->declBus(c+473,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv1",-1,1,0);
	vcdp->declBus(c+474,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in cause",-1,2,0);
	vcdp->declBus(c+475,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in rsrv0",-1,2,0);
	vcdp->declBit(c+476,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in step",-1);
	vcdp->declBus(c+477,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_in prv",-1,1,0);
	vcdp->declBus(c+478,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out xdebugver",-1,3,0);
	vcdp->declBus(c+479,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv3",-1,11,0);
	vcdp->declBit(c+480,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out ebreakm",-1);
	vcdp->declBus(c+481,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv2",-1,2,0);
	vcdp->declBit(c+482,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out stepie",-1);
	vcdp->declBus(c+483,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv1",-1,1,0);
	vcdp->declBus(c+484,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out cause",-1,2,0);
	vcdp->declBus(c+485,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out rsrv0",-1,2,0);
	vcdp->declBit(c+486,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out step",-1);
	vcdp->declBus(c+487,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_out prv",-1,1,0);
	vcdp->declBit(c+972,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_ebreakm",-1);
	vcdp->declBit(c+973,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_stepie",-1);
	vcdp->declBit(c+974,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_step",-1);
	vcdp->declBus(c+769,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dcsr_cause",-1,2,0);
	vcdp->declBit(c+488,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_sel",-1);
	vcdp->declBit(c+489,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_wr",-1);
	vcdp->declBus(c+745,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_reg",-1,31,0);
	vcdp->declBus(c+277,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_in",-1,31,0);
	vcdp->declBus(c+36,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dpc_out",-1,31,0);
	vcdp->declBit(c+273,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_sel",-1);
	vcdp->declBit(c+1027,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_wr",-1);
	vcdp->declBus(c+18,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_out",-1,31,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_pipe_hdu csr_dscratch0_resp",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog clk",-1);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog fuse_mhartid",-1,31,0);
	vcdp->declBus(c+827,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(1)",-1,31,0);
	vcdp->declBus(c+828,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(2)",-1,31,0);
	vcdp->declBus(c+829,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(3)",-1,31,0);
	vcdp->declBus(c+830,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(4)",-1,31,0);
	vcdp->declBus(c+831,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(5)",-1,31,0);
	vcdp->declBus(c+832,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(6)",-1,31,0);
	vcdp->declBus(c+833,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(7)",-1,31,0);
	vcdp->declBus(c+834,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(8)",-1,31,0);
	vcdp->declBus(c+835,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(9)",-1,31,0);
	vcdp->declBus(c+836,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(10)",-1,31,0);
	vcdp->declBus(c+837,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(11)",-1,31,0);
	vcdp->declBus(c+838,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(12)",-1,31,0);
	vcdp->declBus(c+839,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(13)",-1,31,0);
	vcdp->declBus(c+840,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(14)",-1,31,0);
	vcdp->declBus(c+841,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(15)",-1,31,0);
	vcdp->declBus(c+842,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(16)",-1,31,0);
	vcdp->declBus(c+843,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(17)",-1,31,0);
	vcdp->declBus(c+844,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(18)",-1,31,0);
	vcdp->declBus(c+845,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(19)",-1,31,0);
	vcdp->declBus(c+846,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(20)",-1,31,0);
	vcdp->declBus(c+847,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(21)",-1,31,0);
	vcdp->declBus(c+848,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(22)",-1,31,0);
	vcdp->declBus(c+849,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(23)",-1,31,0);
	vcdp->declBus(c+850,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(24)",-1,31,0);
	vcdp->declBus(c+851,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(25)",-1,31,0);
	vcdp->declBus(c+852,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(26)",-1,31,0);
	vcdp->declBus(c+853,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(27)",-1,31,0);
	vcdp->declBus(c+854,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(28)",-1,31,0);
	vcdp->declBus(c+855,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(29)",-1,31,0);
	vcdp->declBus(c+856,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(30)",-1,31,0);
	vcdp->declBus(c+857,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int(31)",-1,31,0);
	vcdp->declBit(c+294,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_en",-1);
	vcdp->declBus(c+195,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_addr",-1,4,0);
	vcdp->declBus(c+295,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_wr_data",-1,31,0);
	vcdp->declBit(c+82,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog update_pc_en",-1);
	vcdp->declBus(c+241,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog update_pc",-1,31,0);
	vcdp->declBit(c+858,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mie",-1);
	vcdp->declBit(c+859,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mpie",-1);
	vcdp->declBus(c+868,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtvec_base",-1,31,6);
	vcdp->declBit(c+869,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtvec_mode",-1);
	vcdp->declBit(c+861,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_meie",-1);
	vcdp->declBit(c+860,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_mtie",-1);
	vcdp->declBit(c+862,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mie_msie",-1);
	vcdp->declBit(c+43,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_meip",-1);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_mtip",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mip_msip",-1);
	vcdp->declBus(c+864,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mepc",-1,31,1);
	vcdp->declBit(c+865,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mcause_i",-1);
	vcdp->declBus(c+866,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mcause_ec",-1,3,0);
	vcdp->declBus(c+867,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mtval",-1,31,0);
	vcdp->declBit(c+306,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mstatus_mie_up",-1);
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_alias // Ignored: Unsupported: Unpacked struct/union at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_tracelog.sv:88
	vcdp->declBus(c+890,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog time_cnt",-1,31,0);
	vcdp->declBit(c+83,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_update",-1);
	vcdp->declBit(c+891,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_update_r",-1);
	vcdp->declBus(c+948,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog curr_pc_log",-1,31,0);
	vcdp->declBus(c+892,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(1)",-1,31,0);
	vcdp->declBus(c+893,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(2)",-1,31,0);
	vcdp->declBus(c+894,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(3)",-1,31,0);
	vcdp->declBus(c+895,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(4)",-1,31,0);
	vcdp->declBus(c+896,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(5)",-1,31,0);
	vcdp->declBus(c+897,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(6)",-1,31,0);
	vcdp->declBus(c+898,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(7)",-1,31,0);
	vcdp->declBus(c+899,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(8)",-1,31,0);
	vcdp->declBus(c+900,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(9)",-1,31,0);
	vcdp->declBus(c+901,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(10)",-1,31,0);
	vcdp->declBus(c+902,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(11)",-1,31,0);
	vcdp->declBus(c+903,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(12)",-1,31,0);
	vcdp->declBus(c+904,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(13)",-1,31,0);
	vcdp->declBus(c+905,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(14)",-1,31,0);
	vcdp->declBus(c+906,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(15)",-1,31,0);
	vcdp->declBus(c+907,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(16)",-1,31,0);
	vcdp->declBus(c+908,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(17)",-1,31,0);
	vcdp->declBus(c+909,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(18)",-1,31,0);
	vcdp->declBus(c+910,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(19)",-1,31,0);
	vcdp->declBus(c+911,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(20)",-1,31,0);
	vcdp->declBus(c+912,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(21)",-1,31,0);
	vcdp->declBus(c+913,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(22)",-1,31,0);
	vcdp->declBus(c+914,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(23)",-1,31,0);
	vcdp->declBus(c+915,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(24)",-1,31,0);
	vcdp->declBus(c+916,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(25)",-1,31,0);
	vcdp->declBus(c+917,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(26)",-1,31,0);
	vcdp->declBus(c+918,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(27)",-1,31,0);
	vcdp->declBus(c+919,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(28)",-1,31,0);
	vcdp->declBus(c+920,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(29)",-1,31,0);
	vcdp->declBus(c+921,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(30)",-1,31,0);
	vcdp->declBus(c+922,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_int_log(31)",-1,31,0);
	vcdp->declBit(c+923,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_up",-1);
	vcdp->declBus(c+924,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog mprf_addr",-1,4,0);
	vcdp->declBit(c+11,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog tracelog_full",-1);
	vcdp->declBus(c+925,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_fhandler",-1,31,0);
	vcdp->declBus(c+1028,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_fhandler_diff",-1,31,0);
	vcdp->declBus(c+926,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog time_cnt2",-1,31,0);
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog hart // Ignored: Unsupported: strings at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_tracelog.sv:157
	// Tracing: scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog test_name // Ignored: Unsupported: strings at /home/P41002_4/scr1_new/scr1/src/pipeline/scr1_tracelog.sv:158
	vcdp->declBus(c+12,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog temp_fhandler",-1,31,0);
	vcdp->declBus(c+927,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog trace_csr_fhandler",-1,31,0);
	vcdp->declBus(c+73,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mstatus",-1,31,0);
	vcdp->declBus(c+74,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mtvec",-1,31,0);
	vcdp->declBus(c+75,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mie",-1,31,0);
	vcdp->declBus(c+76,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mip",-1,31,0);
	vcdp->declBus(c+77,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mepc",-1,31,0);
	vcdp->declBus(c+78,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mcause",-1,31,0);
	vcdp->declBus(c+79,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace1 mtval",-1,31,0);
	vcdp->declBus(c+928,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mstatus",-1,31,0);
	vcdp->declBus(c+929,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mtvec",-1,31,0);
	vcdp->declBus(c+930,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mie",-1,31,0);
	vcdp->declBus(c+931,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mip",-1,31,0);
	vcdp->declBus(c+932,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mepc",-1,31,0);
	vcdp->declBus(c+933,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mcause",-1,31,0);
	vcdp->declBus(c+934,"scr1_top_tb_ahb i_top i_core_top i_pipe_top i_tracelog csr_trace2 mtval",-1,31,0);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc trst_n",-1);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc tck",-1);
	vcdp->declBit(c+7,"scr1_top_tb_ahb i_top i_core_top i_tapc tms",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc tdi",-1);
	vcdp->declBit(c+603,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo",-1);
	vcdp->declBit(c+604,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_en",-1);
	vcdp->declBus(c+1002,"scr1_top_tb_ahb i_top i_core_top i_tapc fuse_idcode",-1,31,0);
	vcdp->declBit(c+124,"scr1_top_tb_ahb i_top i_core_top i_tapc scu_ch_sel",-1);
	vcdp->declBit(c+122,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_sel",-1);
	vcdp->declBus(c+123,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_id",-1,1,0);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_capture",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_shift",-1);
	vcdp->declBit(c+955,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_update",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_tdi",-1);
	vcdp->declBit(c+739,"scr1_top_tb_ahb i_top i_core_top i_tapc dmi_ch_tdo",-1);
	vcdp->declBit(c+976,"scr1_top_tb_ahb i_top i_core_top i_tapc trst_n_int",-1);
	vcdp->declBus(c+605,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_reg",-1,4,0);
	vcdp->declBus(c+606,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_next",-1,4,0);
	vcdp->declBus(c+607,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_ir_shift_reg",-1,4,0);
	vcdp->declBus(c+985,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_state_reg",-1,3,0);
	vcdp->declBus(c+530,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_state_next",-1,3,0);
	vcdp->declBit(c+125,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_out",-1);
	vcdp->declBit(c+126,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_sel",-1);
	vcdp->declBit(c+127,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_sel",-1);
	vcdp->declBit(c+128,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_sel",-1);
	vcdp->declBus(c+608,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_reg_nc",-1,31,0);
	vcdp->declBus(c+609,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_reg_nc",-1,31,0);
	vcdp->declBit(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_reg_nc",-1);
	vcdp->declBit(c+611,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bld_id_tdo",-1);
	vcdp->declBit(c+612,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_bypass_tdo",-1);
	vcdp->declBit(c+613,"scr1_top_tb_ahb i_top i_core_top i_tapc dr_idcode_tdo",-1);
	vcdp->declBit(c+614,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_ir_shift",-1);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_capture",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_shift",-1);
	vcdp->declBit(c+955,"scr1_top_tb_ahb i_top i_core_top i_tapc tap_fsm_dr_update",-1);
	vcdp->declBit(c+129,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_out",-1);
	vcdp->declBit(c+603,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_out_reg",-1);
	vcdp->declBit(c+102,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_en",-1);
	vcdp->declBit(c+604,"scr1_top_tb_ahb i_top i_core_top i_tapc tdo_mux_en_reg",-1);
	vcdp->declBus(c+1029,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg SCR1_WIDTH",-1,31,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg SCR1_RESET_VALUE",-1,0,0);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg clk",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg rst_n",-1);
	vcdp->declBit(c+976,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg rst_n_sync",-1);
	vcdp->declBit(c+126,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_select",-1);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_capture",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg fsm_dr_shift",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg din_serial",-1);
	vcdp->declBus(c+998,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg din_parallel",-1,0,0);
	vcdp->declBit(c+612,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg dout_serial",-1);
	vcdp->declBus(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg dout_parallel",-1,0,0);
	vcdp->declBus(c+610,"scr1_top_tb_ahb i_top i_core_top i_tapc i_bypass_reg shift_reg",-1,0,0);
	vcdp->declBus(c+1031,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg SCR1_WIDTH",-1,31,0);
	vcdp->declBus(c+1032,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg SCR1_RESET_VALUE",-1,31,0);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg clk",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg rst_n",-1);
	vcdp->declBit(c+976,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg rst_n_sync",-1);
	vcdp->declBit(c+127,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_select",-1);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_capture",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg fsm_dr_shift",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg din_serial",-1);
	vcdp->declBus(c+1002,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg din_parallel",-1,31,0);
	vcdp->declBit(c+613,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg dout_serial",-1);
	vcdp->declBus(c+609,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg dout_parallel",-1,31,0);
	vcdp->declBus(c+609,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_idcode_reg shift_reg",-1,31,0);
	vcdp->declBus(c+1031,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg SCR1_WIDTH",-1,31,0);
	vcdp->declBus(c+1032,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg SCR1_RESET_VALUE",-1,31,0);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg clk",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg rst_n",-1);
	vcdp->declBit(c+976,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg rst_n_sync",-1);
	vcdp->declBit(c+128,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_select",-1);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_capture",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg fsm_dr_shift",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg din_serial",-1);
	vcdp->declBus(c+1033,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg din_parallel",-1,31,0);
	vcdp->declBit(c+611,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg dout_serial",-1);
	vcdp->declBus(c+608,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg dout_parallel",-1,31,0);
	vcdp->declBus(c+608,"scr1_top_tb_ahb i_top i_core_top i_tapc i_tap_dr_bld_id_reg shift_reg",-1,31,0);
	vcdp->declBit(c+564,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer pwrup_rst_n",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dm_rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer clk",-1);
	vcdp->declBit(c+561,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer trst_n",-1);
	vcdp->declBit(c+6,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck",-1);
	vcdp->declBit(c+124,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer scu_ch_sel",-1);
	vcdp->declBit(c+707,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer scu_ch_sel_core",-1);
	vcdp->declBit(c+122,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_sel",-1);
	vcdp->declBit(c+771,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_sel_core",-1);
	vcdp->declBus(c+123,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_id",-1,1,0);
	vcdp->declBus(c+772,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_id_core",-1,1,0);
	vcdp->declBit(c+953,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture",-1);
	vcdp->declBit(c+957,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture_core",-1);
	vcdp->declBit(c+954,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift",-1);
	vcdp->declBit(c+958,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift_core",-1);
	vcdp->declBit(c+955,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_update",-1);
	vcdp->declBit(c+705,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_update_core",-1);
	vcdp->declBit(c+8,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi",-1);
	vcdp->declBit(c+706,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi_core",-1);
	vcdp->declBit(c+739,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdo",-1);
	vcdp->declBit(c+739,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdo_core",-1);
	vcdp->declBit(c+956,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divpos",-1);
	vcdp->declBit(c+952,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divneg",-1);
	vcdp->declBit(c+103,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_rise_load",-1);
	vcdp->declBit(c+104,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_rise_reset",-1);
	vcdp->declBit(c+734,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_fall_load",-1);
	vcdp->declBit(c+735,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_fall_reset",-1);
	vcdp->declBus(c+736,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divpos_sync",-1,3,0);
	vcdp->declBus(c+737,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer tck_divneg_sync",-1,3,0);
	vcdp->declBus(c+977,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_capture_sync",-1,2,0);
	vcdp->declBus(c+978,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_shift_sync",-1,2,0);
	vcdp->declBus(c+738,"scr1_top_tb_ahb i_top i_core_top i_tapc_synchronizer dmi_ch_tdi_sync",-1,2,0);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_dmi rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_dmi clk",-1);
	vcdp->declBit(c+771,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_sel",-1);
	vcdp->declBus(c+772,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_id",-1,1,0);
	vcdp->declBit(c+957,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_capture",-1);
	vcdp->declBit(c+958,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_shift",-1);
	vcdp->declBit(c+705,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_update",-1);
	vcdp->declBit(c+706,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_tdi",-1);
	vcdp->declBit(c+773,"scr1_top_tb_ahb i_top i_core_top i_dmi dtm_ch_tdo",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_resp",-1);
	vcdp->declBus(c+533,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_rdata",-1,31,0);
	vcdp->declBit(c+105,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_req",-1);
	vcdp->declBit(c+531,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_wr",-1);
	vcdp->declBus(c+106,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_addr",-1,6,0);
	vcdp->declBus(c+532,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_wdata",-1,31,0);
	vcdp->declBus(c+1034,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDB_HI",-1,4,0);
	vcdp->declBus(c+1035,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDB_LO",-1,4,0);
	vcdp->declBus(c+1036,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMIHARDRESET",-1,4,0);
	vcdp->declBus(c+1037,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMIRESET",-1,4,0);
	vcdp->declBus(c+1038,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_RESERVEDA",-1,4,0);
	vcdp->declBus(c+1039,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_IDLE_HI",-1,4,0);
	vcdp->declBus(c+1040,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_IDLE_LO",-1,4,0);
	vcdp->declBus(c+1041,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMISTAT_HI",-1,4,0);
	vcdp->declBus(c+1042,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_DMISTAT_LO",-1,4,0);
	vcdp->declBus(c+1043,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_ABITS_HI",-1,4,0);
	vcdp->declBus(c+1044,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_ABITS_LO",-1,4,0);
	vcdp->declBus(c+1045,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_VERSION_HI",-1,4,0);
	vcdp->declBus(c+1012,"scr1_top_tb_ahb i_top i_core_top i_dmi DTMCS_VERSION_LO",-1,4,0);
	vcdp->declBit(c+1046,"scr1_top_tb_ahb i_top i_core_top i_dmi dtmcs_dmihardreset_cmb",-1);
	vcdp->declBit(c+1047,"scr1_top_tb_ahb i_top i_core_top i_dmi dtmcs_dmireset_cmb",-1);
	vcdp->declBus(c+1012,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_OP_LO",-1,4,0);
	vcdp->declBus(c+1048,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_OP_HI",-1,31,0);
	vcdp->declBus(c+1049,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_DATA_LO",-1,31,0);
	vcdp->declBus(c+1050,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_DATA_HI",-1,31,0);
	vcdp->declBus(c+1051,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_ADDR_LO",-1,31,0);
	vcdp->declBus(c+1052,"scr1_top_tb_ahb i_top i_core_top i_dmi DMI_ADDR_HI",-1,31,0);
	vcdp->declBus(c+776,"scr1_top_tb_ahb i_top i_core_top i_dmi dmi_rdata_ff",-1,31,0);
	vcdp->declQuad(c+107,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_shift_cmb",-1,40,0);
	vcdp->declQuad(c+39,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_rdata_cmb",-1,40,0);
	vcdp->declQuad(c+777,"scr1_top_tb_ahb i_top i_core_top i_dmi tap_dr_ff",-1,40,0);
	vcdp->declBit(c+121,"scr1_top_tb_ahb i_top i_core_top i_dmi clk_en_dmi_rdata_cmb",-1);
	vcdp->declBit(c+959,"scr1_top_tb_ahb i_top i_core_top i_dmi clk_en_tap_dr_cmb",-1);
	vcdp->declBit(c+986,"scr1_top_tb_ahb i_top i_core_top i_dm rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_core_top i_dm clk",-1);
	vcdp->declBit(c+105,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req",-1);
	vcdp->declBit(c+531,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_wr",-1);
	vcdp->declBus(c+106,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_addr",-1,6,0);
	vcdp->declBus(c+532,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_resp",-1);
	vcdp->declBus(c+533,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_rdata",-1,31,0);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top i_dm ndm_rst_n",-1);
	vcdp->declBit(c+770,"scr1_top_tb_ahb i_top i_core_top i_dm hart_rst_n",-1);
	vcdp->declBit(c+979,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dmactive",-1);
	vcdp->declBit(c+774,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_req",-1);
	vcdp->declBus(c+775,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd",-1,1,0);
	vcdp->declBit(c+595,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_resp",-1);
	vcdp->declBit(c+597,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_rcode",-1);
	vcdp->declBit(c+38,"scr1_top_tb_ahb i_top i_core_top i_dm hart_event",-1);
	vcdp->declBit(c+565,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status except",-1);
	vcdp->declBit(c+566,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status ebreak",-1);
	vcdp->declBus(c+567,"scr1_top_tb_ahb i_top i_core_top i_dm hart_status dbg_state",-1,1,0);
	vcdp->declBus(c+2,"scr1_top_tb_ahb i_top i_core_top i_dm ro_fuse_mhartid",-1,31,0);
	vcdp->declBus(c+100,"scr1_top_tb_ahb i_top i_core_top i_dm ro_pc",-1,31,0);
	vcdp->declBus(c+568,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_addr",-1,2,0);
	vcdp->declBus(c+569,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_instr",-1,31,0);
	vcdp->declBit(c+274,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_req",-1);
	vcdp->declBit(c+276,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_wr",-1);
	vcdp->declBus(c+278,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_resp",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_fail",-1);
	vcdp->declBus(c+635,"scr1_top_tb_ahb i_top i_core_top i_dm hart_dreg_rdata",-1,31,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTRESET",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_RESERVEDB",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HASEL",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTSELLO",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_HARTSELHI",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMCONTROL_RESERVEDA",-1,0,0);
	vcdp->declBit(c+779,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_haltreq_ff",-1);
	vcdp->declBit(c+780,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_resumereq_ff",-1);
	vcdp->declBit(c+781,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_ackhavereset_ff",-1);
	vcdp->declBit(c+782,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_ndmreset_ff",-1);
	vcdp->declBit(c+980,"scr1_top_tb_ahb i_top i_core_top i_dm dmcontrol_dmactive_ff",-1);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDC",-1,0,0);
	vcdp->declBus(c+1023,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_IMPEBREAK",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDB",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLUNAVAIL",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ANYUNAVAIL",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLANYUNAVAIL",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_ALLANYNONEXIST",-1,0,0);
	vcdp->declBus(c+1023,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_AUTHENTICATED",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_AUTHBUSY",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_RESERVEDA",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_DEVTREEVALID",-1,0,0);
	vcdp->declBus(c+1053,"scr1_top_tb_ahb i_top i_core_top i_dm DMSTATUS_VERSION",-1,1,0);
	vcdp->declBit(c+783,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_havereset_ff",-1);
	vcdp->declBit(c+784,"scr1_top_tb_ahb i_top i_core_top i_dm havereset_skip_pwrup_ff",-1);
	vcdp->declBit(c+785,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_resumeack_ff",-1);
	vcdp->declBit(c+1054,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_running",-1);
	vcdp->declBit(c+786,"scr1_top_tb_ahb i_top i_core_top i_dm dmstatus_allany_halted_ff",-1);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_RESERVEDB",-1,0,0);
	vcdp->declBus(c+1055,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_NSCRATCH",-1,3,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_RESERVEDA",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATAACCESS",-1,0,0);
	vcdp->declBus(c+1055,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATASIZE",-1,3,0);
	vcdp->declBus(c+1056,"scr1_top_tb_ahb i_top i_core_top i_dm HARTINFO_DATAADDR",-1,11,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDD",-1,0,0);
	vcdp->declBus(c+1057,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_PROGBUFSIZE",-1,4,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDC",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDB",-1,0,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_RESERVEDA",-1,0,0);
	vcdp->declBus(c+1058,"scr1_top_tb_ahb i_top i_core_top i_dm ABSTRACTCS_DATACOUNT",-1,3,0);
	vcdp->declBit(c+644,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_busy",-1);
	vcdp->declBus(c+645,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_cmderr_ff",-1,2,0);
	vcdp->declBit(c+1059,"scr1_top_tb_ahb i_top i_core_top i_dm abstractcs_ro_en",-1);
	vcdp->declBit(c+646,"scr1_top_tb_ahb i_top i_core_top i_dm abstractauto_execdata0_ff",-1);
	vcdp->declBus(c+647,"scr1_top_tb_ahb i_top i_core_top i_dm data0_ff",-1,31,0);
	vcdp->declBus(c+648,"scr1_top_tb_ahb i_top i_core_top i_dm data1_ff",-1,31,0);
	vcdp->declBus(c+649,"scr1_top_tb_ahb i_top i_core_top i_dm command_ff",-1,31,0);
	vcdp->declBus(c+650,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf0_ff",-1,31,0);
	vcdp->declBus(c+651,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf1_ff",-1,31,0);
	vcdp->declBus(c+652,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf2_ff",-1,31,0);
	vcdp->declBus(c+653,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf3_ff",-1,31,0);
	vcdp->declBus(c+654,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf4_ff",-1,31,0);
	vcdp->declBus(c+655,"scr1_top_tb_ahb i_top i_core_top i_dm progbuf5_ff",-1,31,0);
	vcdp->declBus(c+1030,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG",-1,0,0);
	vcdp->declBus(c+1053,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTMEM",-1,1,0);
	vcdp->declBus(c+1060,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_CSR",-1,3,0);
	vcdp->declBus(c+1055,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_INTFPU",-1,3,0);
	vcdp->declBus(c+1061,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_INT",-1,6,0);
	vcdp->declBus(c+1062,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_CMD_HARTREG_FPU",-1,6,0);
	vcdp->declBus(c+1063,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_EXEC_EBREAK",-1,31,0);
	vcdp->declBus(c+1023,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_BUSY",-1,0,0);
	vcdp->declBus(c+1053,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_CMD",-1,1,0);
	vcdp->declBus(c+1064,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_EXCEPTION",-1,1,0);
	vcdp->declBus(c+1065,"scr1_top_tb_ahb i_top i_core_top i_dm ABS_ERR_NOHALT",-1,2,0);
	vcdp->declBit(c+534,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_dmcontrol_cmb",-1);
	vcdp->declBit(c+109,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_abstractcs_cmb",-1);
	vcdp->declBit(c+110,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_abstractauto_cmb",-1);
	vcdp->declBit(c+111,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_command_cmb",-1);
	vcdp->declBit(c+112,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_rpt_command_cmb",-1);
	vcdp->declBit(c+113,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_data0_cmb",-1);
	vcdp->declBit(c+114,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_data1_cmb",-1);
	vcdp->declBit(c+115,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf0_cmb",-1);
	vcdp->declBit(c+116,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf1_cmb",-1);
	vcdp->declBit(c+117,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf2_cmb",-1);
	vcdp->declBit(c+118,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf3_cmb",-1);
	vcdp->declBit(c+119,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf4_cmb",-1);
	vcdp->declBit(c+120,"scr1_top_tb_ahb i_top i_core_top i_dm dmi_req_progbuf5_cmb",-1);
	vcdp->declBus(c+580,"scr1_top_tb_ahb i_top i_core_top i_dm abs_fsm_cmb",-1,3,0);
	vcdp->declBus(c+656,"scr1_top_tb_ahb i_top i_core_top i_dm abs_fsm_ff",-1,3,0);
	vcdp->declBit(c+581,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_req_cmb",-1);
	vcdp->declBit(c+657,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_req_ff",-1);
	vcdp->declBus(c+16,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_instr_cmb",-1,31,0);
	vcdp->declBus(c+658,"scr1_top_tb_ahb i_top i_core_top i_dm abs_exec_instr_ff",-1,31,0);
	vcdp->declBus(c+535,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_cmb",-1,7,0);
	vcdp->declBit(c+536,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_csr_ro_cmb",-1);
	vcdp->declBit(c+537,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regacs_cmb",-1);
	vcdp->declBus(c+538,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regtype_cmb",-1,3,0);
	vcdp->declBus(c+539,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regfile_cmb",-1,6,0);
	vcdp->declBit(c+540,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regwr_cmb",-1);
	vcdp->declBus(c+541,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regno_cmb",-1,11,0);
	vcdp->declBus(c+542,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regsize_cmb",-1,2,0);
	vcdp->declBit(c+543,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regsize_valid_cmb",-1);
	vcdp->declBit(c+544,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regvalid_cmb",-1);
	vcdp->declBit(c+545,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_execprogbuf_cmb",-1);
	vcdp->declBit(c+546,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memvalid_cmb",-1);
	vcdp->declBit(c+547,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memwr_cmb",-1);
	vcdp->declBus(c+548,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memsize_cmb",-1,2,0);
	vcdp->declBit(c+549,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_memsize_valid_cmb",-1);
	vcdp->declBit(c+659,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_wr_ff",-1);
	vcdp->declBit(c+582,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_wr_cmb",-1);
	vcdp->declBit(c+660,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_postexec_ff",-1);
	vcdp->declBit(c+583,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_postexec_cmb",-1);
	vcdp->declBus(c+661,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_size_ff",-1,1,0);
	vcdp->declBus(c+584,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_size_cmb",-1,1,0);
	vcdp->declBus(c+662,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmd_regno_ff",-1,11,0);
	vcdp->declBit(c+19,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_exception_cmb",-1);
	vcdp->declBit(c+663,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_exception_ff",-1);
	vcdp->declBit(c+17,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_acc_busy_cmb",-1);
	vcdp->declBit(c+664,"scr1_top_tb_ahb i_top i_core_top i_dm abs_err_acc_busy_ff",-1);
	vcdp->declBus(c+490,"scr1_top_tb_ahb i_top i_core_top i_dm abs_data0_cmb",-1,31,0);
	vcdp->declBus(c+491,"scr1_top_tb_ahb i_top i_core_top i_dm abs_data1_cmb",-1,31,0);
	vcdp->declBus(c+550,"scr1_top_tb_ahb i_top i_core_top i_dm abs_command_cmb",-1,31,0);
	vcdp->declBit(c+551,"scr1_top_tb_ahb i_top i_core_top i_dm abs_abstractauto_execdata0_cmb",-1);
	vcdp->declBus(c+552,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf0_cmb",-1,31,0);
	vcdp->declBus(c+553,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf1_cmb",-1,31,0);
	vcdp->declBus(c+554,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf2_cmb",-1,31,0);
	vcdp->declBus(c+555,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf3_cmb",-1,31,0);
	vcdp->declBus(c+556,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf4_cmb",-1,31,0);
	vcdp->declBus(c+557,"scr1_top_tb_ahb i_top i_core_top i_dm abs_progbuf5_cmb",-1,31,0);
	vcdp->declBus(c+585,"scr1_top_tb_ahb i_top i_core_top i_dm abs_cmderr_cmb",-1,2,0);
	vcdp->declBit(c+558,"scr1_top_tb_ahb i_top i_core_top i_dm clk_en_dm_cmb",-1);
	vcdp->declBit(c+979,"scr1_top_tb_ahb i_top i_core_top i_dm clk_en_dm_ff",-1);
	vcdp->declBus(c+601,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_fsm_cmb",-1,2,0);
	vcdp->declBus(c+787,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_fsm_ff",-1,2,0);
	vcdp->declBus(c+586,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_req_cmb",-1,2,0);
	vcdp->declBit(c+587,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_resp_cmb",-1);
	vcdp->declBit(c+573,"scr1_top_tb_ahb i_top i_core_top i_dm dhi_resp_exception_cmb",-1);
	vcdp->declBit(c+665,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_ebreak_ff",-1);
	vcdp->declBit(c+1066,"scr1_top_tb_ahb i_top i_core_top i_dm hart_pbuf_ebreak_cmb",-1);
	vcdp->declBit(c+602,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_req_cmb",-1);
	vcdp->declBus(c+41,"scr1_top_tb_ahb i_top i_core_top i_dm hart_cmd_cmb",-1,1,0);
	vcdp->declBus(c+1067,"scr1_top_tb_ahb i_top i_tcm SCR1_TCM_SIZE",-1,31,0);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_tcm clk",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_tcm rst_n",-1);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_tcm imem_req_ack",-1);
	vcdp->declBit(c+262,"scr1_top_tb_ahb i_top i_tcm imem_req",-1);
	vcdp->declBus(c+263,"scr1_top_tb_ahb i_top i_tcm imem_addr",-1,31,0);
	vcdp->declBus(c+633,"scr1_top_tb_ahb i_top i_tcm imem_rdata",-1,31,0);
	vcdp->declBus(c+791,"scr1_top_tb_ahb i_top i_tcm imem_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_tcm dmem_req_ack",-1);
	vcdp->declBit(c+264,"scr1_top_tb_ahb i_top i_tcm dmem_req",-1);
	vcdp->declBit(c+265,"scr1_top_tb_ahb i_top i_tcm dmem_cmd",-1);
	vcdp->declBus(c+266,"scr1_top_tb_ahb i_top i_tcm dmem_width",-1,1,0);
	vcdp->declBus(c+267,"scr1_top_tb_ahb i_top i_tcm dmem_addr",-1,31,0);
	vcdp->declBus(c+268,"scr1_top_tb_ahb i_top i_tcm dmem_wdata",-1,31,0);
	vcdp->declBus(c+634,"scr1_top_tb_ahb i_top i_tcm dmem_rdata",-1,31,0);
	vcdp->declBus(c+792,"scr1_top_tb_ahb i_top i_tcm dmem_resp",-1,1,0);
	vcdp->declBit(c+94,"scr1_top_tb_ahb i_top i_tcm imem_req_en",-1);
	vcdp->declBit(c+95,"scr1_top_tb_ahb i_top i_tcm dmem_req_en",-1);
	vcdp->declBit(c+262,"scr1_top_tb_ahb i_top i_tcm imem_rd",-1);
	vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_tcm dmem_rd",-1);
	vcdp->declBit(c+493,"scr1_top_tb_ahb i_top i_tcm dmem_wr",-1);
	vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_tcm dmem_writedata",-1,31,0);
	vcdp->declBus(c+666,"scr1_top_tb_ahb i_top i_tcm dmem_rdata_local",-1,31,0);
	vcdp->declBus(c+495,"scr1_top_tb_ahb i_top i_tcm dmem_byteen",-1,3,0);
	vcdp->declBus(c+667,"scr1_top_tb_ahb i_top i_tcm dmem_rdata_shift_reg",-1,1,0);
	vcdp->declBus(c+1068,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_WIDTH",-1,31,0);
	vcdp->declBus(c+1067,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_SIZE",-1,31,0);
	vcdp->declBus(c+1010,"scr1_top_tb_ahb i_top i_tcm i_dp_memory SCR1_NBYTES",-1,31,0);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_tcm i_dp_memory clk",-1);
	vcdp->declBit(c+262,"scr1_top_tb_ahb i_top i_tcm i_dp_memory rena",-1);
	vcdp->declBus(c+496,"scr1_top_tb_ahb i_top i_tcm i_dp_memory addra",-1,15,2);
	vcdp->declBus(c+633,"scr1_top_tb_ahb i_top i_tcm i_dp_memory qa",-1,31,0);
	vcdp->declBit(c+492,"scr1_top_tb_ahb i_top i_tcm i_dp_memory renb",-1);
	vcdp->declBit(c+493,"scr1_top_tb_ahb i_top i_tcm i_dp_memory wenb",-1);
	vcdp->declBus(c+495,"scr1_top_tb_ahb i_top i_tcm i_dp_memory webb",-1,3,0);
	vcdp->declBus(c+497,"scr1_top_tb_ahb i_top i_tcm i_dp_memory addrb",-1,15,2);
	vcdp->declBus(c+494,"scr1_top_tb_ahb i_top i_tcm i_dp_memory datab",-1,31,0);
	vcdp->declBus(c+666,"scr1_top_tb_ahb i_top i_tcm i_dp_memory qb",-1,31,0);
	vcdp->declBus(c+1069,"scr1_top_tb_ahb i_top i_tcm i_dp_memory RAM_SIZE_WORDS",-1,31,0);
	// Tracing: scr1_top_tb_ahb i_top i_tcm i_dp_memory ram_block // Ignored: Wide memory > --trace-max-array ents at /home/P41002_4/scr1_new/scr1/src/top/scr1_dp_memory.sv:73
	vcdp->declBus(c+668,"scr1_top_tb_ahb i_top i_tcm i_dp_memory unnamedblk1 i",-1,31,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_timer rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_timer clk",-1);
	vcdp->declBit(c+1,"scr1_top_tb_ahb i_top i_timer rtc_clk",-1);
	vcdp->declBit(c+269,"scr1_top_tb_ahb i_top i_timer dmem_req",-1);
	vcdp->declBit(c+270,"scr1_top_tb_ahb i_top i_timer dmem_cmd",-1);
	vcdp->declBus(c+235,"scr1_top_tb_ahb i_top i_timer dmem_width",-1,1,0);
	vcdp->declBus(c+271,"scr1_top_tb_ahb i_top i_timer dmem_addr",-1,31,0);
	vcdp->declBus(c+272,"scr1_top_tb_ahb i_top i_timer dmem_wdata",-1,31,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_timer dmem_req_ack",-1);
	vcdp->declBus(c+793,"scr1_top_tb_ahb i_top i_timer dmem_rdata",-1,31,0);
	vcdp->declBus(c+794,"scr1_top_tb_ahb i_top i_timer dmem_resp",-1,1,0);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top i_timer timer_val",-1,63,0);
	vcdp->declBit(c+795,"scr1_top_tb_ahb i_top i_timer timer_irq",-1);
	vcdp->declBus(c+1070,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+1012,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL",-1,4,0);
	vcdp->declBus(c+1044,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_DIVIDER",-1,4,0);
	vcdp->declBus(c+1071,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMELO",-1,4,0);
	vcdp->declBus(c+1040,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMEHI",-1,4,0);
	vcdp->declBus(c+1037,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMECMPLO",-1,4,0);
	vcdp->declBus(c+1072,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_MTIMECMPHI",-1,4,0);
	vcdp->declBus(c+1073,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL_EN_OFFSET",-1,31,0);
	vcdp->declBus(c+1029,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_CONTROL_CLKSRC_OFFSET",-1,31,0);
	vcdp->declBus(c+1074,"scr1_top_tb_ahb i_top i_timer SCR1_TIMER_DIVIDER_WIDTH",-1,31,0);
	vcdp->declQuad(c+796,"scr1_top_tb_ahb i_top i_timer mtime_reg",-1,63,0);
	vcdp->declQuad(c+498,"scr1_top_tb_ahb i_top i_timer mtime_new",-1,63,0);
	vcdp->declQuad(c+935,"scr1_top_tb_ahb i_top i_timer mtimecmp_reg",-1,63,0);
	vcdp->declQuad(c+500,"scr1_top_tb_ahb i_top i_timer mtimecmp_new",-1,63,0);
	vcdp->declBit(c+937,"scr1_top_tb_ahb i_top i_timer timer_en",-1);
	vcdp->declBit(c+984,"scr1_top_tb_ahb i_top i_timer timer_clksrc_rtc",-1);
	vcdp->declBus(c+938,"scr1_top_tb_ahb i_top i_timer timer_div",-1,9,0);
	vcdp->declBit(c+502,"scr1_top_tb_ahb i_top i_timer control_up",-1);
	vcdp->declBit(c+503,"scr1_top_tb_ahb i_top i_timer divider_up",-1);
	vcdp->declBit(c+504,"scr1_top_tb_ahb i_top i_timer mtimelo_up",-1);
	vcdp->declBit(c+505,"scr1_top_tb_ahb i_top i_timer mtimehi_up",-1);
	vcdp->declBit(c+506,"scr1_top_tb_ahb i_top i_timer mtimecmplo_up",-1);
	vcdp->declBit(c+507,"scr1_top_tb_ahb i_top i_timer mtimecmphi_up",-1);
	vcdp->declBit(c+508,"scr1_top_tb_ahb i_top i_timer dmem_req_valid",-1);
	vcdp->declBus(c+982,"scr1_top_tb_ahb i_top i_timer rtc_sync",-1,3,0);
	vcdp->declBit(c+983,"scr1_top_tb_ahb i_top i_timer rtc_ext_pulse",-1);
	vcdp->declBus(c+939,"scr1_top_tb_ahb i_top i_timer timeclk_cnt",-1,9,0);
	vcdp->declBit(c+559,"scr1_top_tb_ahb i_top i_timer timeclk_cnt_en",-1);
	vcdp->declBit(c+560,"scr1_top_tb_ahb i_top i_timer time_posedge",-1);
	vcdp->declBit(c+509,"scr1_top_tb_ahb i_top i_timer time_cmp_flag",-1);
	vcdp->declBus(c+1075,"scr1_top_tb_ahb i_top i_imem_router SCR1_ADDR_MASK",-1,31,0);
	vcdp->declBus(c+1076,"scr1_top_tb_ahb i_top i_imem_router SCR1_ADDR_PATTERN",-1,31,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_imem_router rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_imem_router clk",-1);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top i_imem_router imem_req_ack",-1);
	vcdp->declBit(c+249,"scr1_top_tb_ahb i_top i_imem_router imem_req",-1);
	vcdp->declBit(c+1003,"scr1_top_tb_ahb i_top i_imem_router imem_cmd",-1);
	vcdp->declBus(c+250,"scr1_top_tb_ahb i_top i_imem_router imem_addr",-1,31,0);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top i_imem_router imem_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_imem_router imem_resp",-1,1,0);
	vcdp->declBit(c+789,"scr1_top_tb_ahb i_top i_imem_router port0_req_ack",-1);
	vcdp->declBit(c+255,"scr1_top_tb_ahb i_top i_imem_router port0_req",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_imem_router port0_cmd",-1);
	vcdp->declBus(c+256,"scr1_top_tb_ahb i_top i_imem_router port0_addr",-1,31,0);
	vcdp->declBus(c+136,"scr1_top_tb_ahb i_top i_imem_router port0_rdata",-1,31,0);
	vcdp->declBus(c+80,"scr1_top_tb_ahb i_top i_imem_router port0_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_imem_router port1_req_ack",-1);
	vcdp->declBit(c+262,"scr1_top_tb_ahb i_top i_imem_router port1_req",-1);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_imem_router port1_cmd",-1);
	vcdp->declBus(c+263,"scr1_top_tb_ahb i_top i_imem_router port1_addr",-1,31,0);
	vcdp->declBus(c+633,"scr1_top_tb_ahb i_top i_imem_router port1_rdata",-1,31,0);
	vcdp->declBus(c+791,"scr1_top_tb_ahb i_top i_imem_router port1_resp",-1,1,0);
	vcdp->declBit(c+940,"scr1_top_tb_ahb i_top i_imem_router fsm",-1);
	vcdp->declBit(c+510,"scr1_top_tb_ahb i_top i_imem_router port_sel",-1);
	vcdp->declBit(c+941,"scr1_top_tb_ahb i_top i_imem_router port_sel_r",-1);
	vcdp->declBus(c+153,"scr1_top_tb_ahb i_top i_imem_router sel_rdata",-1,31,0);
	vcdp->declBus(c+154,"scr1_top_tb_ahb i_top i_imem_router sel_resp",-1,1,0);
	vcdp->declBit(c+248,"scr1_top_tb_ahb i_top i_imem_router sel_req_ack",-1);
	vcdp->declBus(c+1075,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT1_ADDR_MASK",-1,31,0);
	vcdp->declBus(c+1076,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT1_ADDR_PATTERN",-1,31,0);
	vcdp->declBus(c+1077,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT2_ADDR_MASK",-1,31,0);
	vcdp->declBus(c+1078,"scr1_top_tb_ahb i_top i_dmem_router SCR1_PORT2_ADDR_PATTERN",-1,31,0);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_dmem_router rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_dmem_router clk",-1);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_dmem_router dmem_req_ack",-1);
	vcdp->declBit(c+252,"scr1_top_tb_ahb i_top i_dmem_router dmem_req",-1);
	vcdp->declBit(c+168,"scr1_top_tb_ahb i_top i_dmem_router dmem_cmd",-1);
	vcdp->declBus(c+169,"scr1_top_tb_ahb i_top i_dmem_router dmem_width",-1,1,0);
	vcdp->declBus(c+253,"scr1_top_tb_ahb i_top i_dmem_router dmem_addr",-1,31,0);
	vcdp->declBus(c+254,"scr1_top_tb_ahb i_top i_dmem_router dmem_wdata",-1,31,0);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_dmem_router dmem_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_dmem_router dmem_resp",-1,1,0);
	vcdp->declBit(c+790,"scr1_top_tb_ahb i_top i_dmem_router port0_req_ack",-1);
	vcdp->declBit(c+257,"scr1_top_tb_ahb i_top i_dmem_router port0_req",-1);
	vcdp->declBit(c+258,"scr1_top_tb_ahb i_top i_dmem_router port0_cmd",-1);
	vcdp->declBus(c+259,"scr1_top_tb_ahb i_top i_dmem_router port0_width",-1,1,0);
	vcdp->declBus(c+260,"scr1_top_tb_ahb i_top i_dmem_router port0_addr",-1,31,0);
	vcdp->declBus(c+261,"scr1_top_tb_ahb i_top i_dmem_router port0_wdata",-1,31,0);
	vcdp->declBus(c+137,"scr1_top_tb_ahb i_top i_dmem_router port0_rdata",-1,31,0);
	vcdp->declBus(c+143,"scr1_top_tb_ahb i_top i_dmem_router port0_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_dmem_router port1_req_ack",-1);
	vcdp->declBit(c+264,"scr1_top_tb_ahb i_top i_dmem_router port1_req",-1);
	vcdp->declBit(c+265,"scr1_top_tb_ahb i_top i_dmem_router port1_cmd",-1);
	vcdp->declBus(c+266,"scr1_top_tb_ahb i_top i_dmem_router port1_width",-1,1,0);
	vcdp->declBus(c+267,"scr1_top_tb_ahb i_top i_dmem_router port1_addr",-1,31,0);
	vcdp->declBus(c+268,"scr1_top_tb_ahb i_top i_dmem_router port1_wdata",-1,31,0);
	vcdp->declBus(c+634,"scr1_top_tb_ahb i_top i_dmem_router port1_rdata",-1,31,0);
	vcdp->declBus(c+792,"scr1_top_tb_ahb i_top i_dmem_router port1_resp",-1,1,0);
	vcdp->declBit(c+1001,"scr1_top_tb_ahb i_top i_dmem_router port2_req_ack",-1);
	vcdp->declBit(c+269,"scr1_top_tb_ahb i_top i_dmem_router port2_req",-1);
	vcdp->declBit(c+270,"scr1_top_tb_ahb i_top i_dmem_router port2_cmd",-1);
	vcdp->declBus(c+235,"scr1_top_tb_ahb i_top i_dmem_router port2_width",-1,1,0);
	vcdp->declBus(c+271,"scr1_top_tb_ahb i_top i_dmem_router port2_addr",-1,31,0);
	vcdp->declBus(c+272,"scr1_top_tb_ahb i_top i_dmem_router port2_wdata",-1,31,0);
	vcdp->declBus(c+793,"scr1_top_tb_ahb i_top i_dmem_router port2_rdata",-1,31,0);
	vcdp->declBus(c+794,"scr1_top_tb_ahb i_top i_dmem_router port2_resp",-1,1,0);
	vcdp->declBit(c+942,"scr1_top_tb_ahb i_top i_dmem_router fsm",-1);
	vcdp->declBus(c+511,"scr1_top_tb_ahb i_top i_dmem_router port_sel",-1,1,0);
	vcdp->declBus(c+943,"scr1_top_tb_ahb i_top i_dmem_router port_sel_r",-1,1,0);
	vcdp->declBus(c+155,"scr1_top_tb_ahb i_top i_dmem_router sel_rdata",-1,31,0);
	vcdp->declBus(c+156,"scr1_top_tb_ahb i_top i_dmem_router sel_resp",-1,1,0);
	vcdp->declBit(c+251,"scr1_top_tb_ahb i_top i_dmem_router sel_req_ack",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_imem_ahb rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_imem_ahb clk",-1);
	vcdp->declBit(c+789,"scr1_top_tb_ahb i_top i_imem_ahb imem_req_ack",-1);
	vcdp->declBit(c+255,"scr1_top_tb_ahb i_top i_imem_ahb imem_req",-1);
	vcdp->declBus(c+256,"scr1_top_tb_ahb i_top i_imem_ahb imem_addr",-1,31,0);
	vcdp->declBus(c+136,"scr1_top_tb_ahb i_top i_imem_ahb imem_rdata",-1,31,0);
	vcdp->declBus(c+80,"scr1_top_tb_ahb i_top i_imem_ahb imem_resp",-1,1,0);
	vcdp->declBus(c+9,"scr1_top_tb_ahb i_top i_imem_ahb hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb i_top i_imem_ahb hburst",-1,2,0);
	vcdp->declBus(c+1000,"scr1_top_tb_ahb i_top i_imem_ahb hsize",-1,2,0);
	vcdp->declBus(c+242,"scr1_top_tb_ahb i_top i_imem_ahb htrans",-1,1,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_imem_ahb hmastlock",-1);
	vcdp->declBus(c+243,"scr1_top_tb_ahb i_top i_imem_ahb haddr",-1,31,0);
	vcdp->declBit(c+130,"scr1_top_tb_ahb i_top i_imem_ahb hready",-1);
	vcdp->declBus(c+131,"scr1_top_tb_ahb i_top i_imem_ahb hrdata",-1,31,0);
	vcdp->declBit(c+132,"scr1_top_tb_ahb i_top i_imem_ahb hresp",-1);
	vcdp->declBit(c+944,"scr1_top_tb_ahb i_top i_imem_ahb fsm",-1);
	vcdp->declBit(c+512,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_rd",-1);
	vcdp->declBit(c+96,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_wr",-1);
	vcdp->declBit(c+97,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_up",-1);
	vcdp->declBus(c+669,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_r haddr",-1,31,0);
	vcdp->declBus(c+243,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo(0) haddr",-1,31,0);
	vcdp->declBit(c+513,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_empty",-1);
	vcdp->declBit(c+945,"scr1_top_tb_ahb i_top i_imem_ahb req_fifo_full",-1);
	vcdp->declBit(c+138,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo hresp",-1);
	vcdp->declBus(c+136,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo hrdata",-1,31,0);
	vcdp->declBit(c+81,"scr1_top_tb_ahb i_top i_imem_ahb resp_fifo_hready",-1);
	vcdp->declBit(c+987,"scr1_top_tb_ahb i_top i_dmem_ahb rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_top i_dmem_ahb clk",-1);
	vcdp->declBit(c+790,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_req_ack",-1);
	vcdp->declBit(c+257,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_req",-1);
	vcdp->declBit(c+258,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_cmd",-1);
	vcdp->declBus(c+259,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_width",-1,1,0);
	vcdp->declBus(c+260,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_addr",-1,31,0);
	vcdp->declBus(c+261,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_wdata",-1,31,0);
	vcdp->declBus(c+137,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_rdata",-1,31,0);
	vcdp->declBus(c+143,"scr1_top_tb_ahb i_top i_dmem_ahb dmem_resp",-1,1,0);
	vcdp->declBus(c+10,"scr1_top_tb_ahb i_top i_dmem_ahb hprot",-1,3,0);
	vcdp->declBus(c+999,"scr1_top_tb_ahb i_top i_dmem_ahb hburst",-1,2,0);
	vcdp->declBus(c+244,"scr1_top_tb_ahb i_top i_dmem_ahb hsize",-1,2,0);
	vcdp->declBus(c+245,"scr1_top_tb_ahb i_top i_dmem_ahb htrans",-1,1,0);
	vcdp->declBit(c+998,"scr1_top_tb_ahb i_top i_dmem_ahb hmastlock",-1);
	vcdp->declBus(c+246,"scr1_top_tb_ahb i_top i_dmem_ahb haddr",-1,31,0);
	vcdp->declBit(c+247,"scr1_top_tb_ahb i_top i_dmem_ahb hwrite",-1);
	vcdp->declBus(c+947,"scr1_top_tb_ahb i_top i_dmem_ahb hwdata",-1,31,0);
	vcdp->declBit(c+133,"scr1_top_tb_ahb i_top i_dmem_ahb hready",-1);
	vcdp->declBus(c+134,"scr1_top_tb_ahb i_top i_dmem_ahb hrdata",-1,31,0);
	vcdp->declBit(c+135,"scr1_top_tb_ahb i_top i_dmem_ahb hresp",-1);
	vcdp->declBit(c+975,"scr1_top_tb_ahb i_top i_dmem_ahb fsm",-1);
	vcdp->declBit(c+514,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_rd",-1);
	vcdp->declBit(c+98,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_wr",-1);
	vcdp->declBit(c+99,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_up",-1);
	vcdp->declBit(c+515,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwrite",-1);
	vcdp->declBus(c+516,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwidth",-1,2,0);
	vcdp->declBus(c+517,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new haddr",-1,31,0);
	vcdp->declBus(c+518,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_new hwdata",-1,31,0);
	vcdp->declBit(c+670,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwrite",-1);
	vcdp->declBus(c+671,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwidth",-1,2,0);
	vcdp->declBus(c+672,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r haddr",-1,31,0);
	vcdp->declBus(c+673,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_r hwdata",-1,31,0);
	vcdp->declBit(c+519,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwrite",-1);
	vcdp->declBus(c+520,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwidth",-1,2,0);
	vcdp->declBus(c+521,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) haddr",-1,31,0);
	vcdp->declBus(c+522,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo(0) hwdata",-1,31,0);
	vcdp->declBit(c+523,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_empty",-1);
	vcdp->declBit(c+946,"scr1_top_tb_ahb i_top i_dmem_ahb req_fifo_full",-1);
	vcdp->declBit(c+949,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwrite",-1);
	vcdp->declBus(c+950,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwidth",-1,2,0);
	vcdp->declBus(c+951,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo haddr",-1,1,0);
	vcdp->declBus(c+947,"scr1_top_tb_ahb i_top i_dmem_ahb data_fifo hwdata",-1,31,0);
	vcdp->declBit(c+139,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hresp",-1);
	vcdp->declBus(c+140,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hwidth",-1,2,0);
	vcdp->declBus(c+141,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo haddr",-1,1,0);
	vcdp->declBus(c+142,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo hrdata",-1,31,0);
	vcdp->declBit(c+144,"scr1_top_tb_ahb i_top i_dmem_ahb resp_fifo_hready",-1);
	vcdp->declBus(c+1079,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_POWER_SIZE",-1,31,0);
	vcdp->declBit(c+101,"scr1_top_tb_ahb i_memory_tb rst_n",-1);
	vcdp->declBit(c+995,"scr1_top_tb_ahb i_memory_tb clk",-1);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_memory_tb irq_lines",-1,15,0);
	vcdp->declBus(c+3,"scr1_top_tb_ahb i_memory_tb imem_req_ack_stall_in",-1,31,0);
	vcdp->declBus(c+4,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_stall_in",-1,31,0);
	vcdp->declBus(c+1000,"scr1_top_tb_ahb i_memory_tb imem_hsize",-1,2,0);
	vcdp->declBus(c+242,"scr1_top_tb_ahb i_memory_tb imem_htrans",-1,1,0);
	vcdp->declBus(c+243,"scr1_top_tb_ahb i_memory_tb imem_haddr",-1,31,0);
	vcdp->declBit(c+130,"scr1_top_tb_ahb i_memory_tb imem_hready",-1);
	vcdp->declBus(c+131,"scr1_top_tb_ahb i_memory_tb imem_hrdata",-1,31,0);
	vcdp->declBit(c+132,"scr1_top_tb_ahb i_memory_tb imem_hresp",-1);
	vcdp->declBus(c+244,"scr1_top_tb_ahb i_memory_tb dmem_hsize",-1,2,0);
	vcdp->declBus(c+245,"scr1_top_tb_ahb i_memory_tb dmem_htrans",-1,1,0);
	vcdp->declBus(c+246,"scr1_top_tb_ahb i_memory_tb dmem_haddr",-1,31,0);
	vcdp->declBit(c+247,"scr1_top_tb_ahb i_memory_tb dmem_hwrite",-1);
	vcdp->declBus(c+947,"scr1_top_tb_ahb i_memory_tb dmem_hwdata",-1,31,0);
	vcdp->declBit(c+133,"scr1_top_tb_ahb i_memory_tb dmem_hready",-1);
	vcdp->declBus(c+134,"scr1_top_tb_ahb i_memory_tb dmem_hrdata",-1,31,0);
	vcdp->declBit(c+135,"scr1_top_tb_ahb i_memory_tb dmem_hresp",-1);
	vcdp->declBus(c+1080,"scr1_top_tb_ahb i_memory_tb SCR1_PRINT_ADDR",-1,31,0);
	vcdp->declBus(c+1081,"scr1_top_tb_ahb i_memory_tb SCR1_IRQ_ADDR",-1,31,0);
	vcdp->declBus(c+1082,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_ERR_ADDR",-1,31,0);
	vcdp->declBus(c+1083,"scr1_top_tb_ahb i_memory_tb SCR1_MEM_ERR_PTR",-1,31,0);
	// Tracing: scr1_top_tb_ahb i_memory_tb memory // Ignored: Wide memory > --trace-max-array ents at /home/P41002_4/scr1_new/scr1/src/tb/scr1_memory_tb_ahb.sv:65
	vcdp->declBus(c+689,"scr1_top_tb_ahb i_memory_tb mem_err_ptr",-1,31,0);
	vcdp->declBus(c+960,"scr1_top_tb_ahb i_memory_tb irq_reg",-1,15,0);
	// Tracing: scr1_top_tb_ahb i_memory_tb mirage // Ignored: Wide memory > --trace-max-array ents at /home/P41002_4/scr1_new/scr1/src/tb/scr1_memory_tb_ahb.sv:70
	vcdp->declBit(c+1084,"scr1_top_tb_ahb i_memory_tb mirage_en",-1);
	vcdp->declBit(c+1085,"scr1_top_tb_ahb i_memory_tb mirage_rangeen",-1);
	vcdp->declBus(c+1086,"scr1_top_tb_ahb i_memory_tb mirage_adrlo",-1,31,0);
	vcdp->declBus(c+1086,"scr1_top_tb_ahb i_memory_tb mirage_adrhi",-1,31,0);
	vcdp->declArray(c+674,"scr1_top_tb_ahb i_memory_tb test_file",-1,255,0);
	vcdp->declBit(c+682,"scr1_top_tb_ahb i_memory_tb test_file_init",-1);
	vcdp->declBit(c+690,"scr1_top_tb_ahb i_memory_tb imem_ahb_state",-1);
	vcdp->declBus(c+691,"scr1_top_tb_ahb i_memory_tb imem_ahb_addr",-1,31,0);
	vcdp->declBus(c+692,"scr1_top_tb_ahb i_memory_tb imem_req_ack_stall",-1,31,0);
	vcdp->declBit(c+693,"scr1_top_tb_ahb i_memory_tb imem_req_ack_rnd",-1);
	vcdp->declBit(c+22,"scr1_top_tb_ahb i_memory_tb imem_req_ack",-1);
	vcdp->declBit(c+1087,"scr1_top_tb_ahb i_memory_tb imem_req_ack_nc",-1);
	vcdp->declBus(c+13,"scr1_top_tb_ahb i_memory_tb imem_be",-1,3,0);
	vcdp->declBus(c+694,"scr1_top_tb_ahb i_memory_tb imem_hrdata_l",-1,31,0);
	vcdp->declBus(c+524,"scr1_top_tb_ahb i_memory_tb imem_wr_hazard",-1,3,0);
	vcdp->declBus(c+695,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_stall",-1,31,0);
	vcdp->declBit(c+696,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_rnd",-1);
	vcdp->declBit(c+23,"scr1_top_tb_ahb i_memory_tb dmem_req_ack",-1);
	vcdp->declBit(c+1088,"scr1_top_tb_ahb i_memory_tb dmem_req_ack_nc",-1);
	vcdp->declBus(c+525,"scr1_top_tb_ahb i_memory_tb dmem_be",-1,3,0);
	vcdp->declBit(c+697,"scr1_top_tb_ahb i_memory_tb dmem_ahb_state",-1);
	vcdp->declBus(c+698,"scr1_top_tb_ahb i_memory_tb dmem_ahb_addr",-1,31,0);
	vcdp->declBit(c+699,"scr1_top_tb_ahb i_memory_tb dmem_ahb_wr",-1);
	vcdp->declBus(c+700,"scr1_top_tb_ahb i_memory_tb dmem_ahb_size",-1,2,0);
	vcdp->declBus(c+701,"scr1_top_tb_ahb i_memory_tb dmem_ahb_be",-1,3,0);
	vcdp->declBus(c+702,"scr1_top_tb_ahb i_memory_tb dmem_hrdata_l",-1,31,0);
	vcdp->declBus(c+526,"scr1_top_tb_ahb i_memory_tb dmem_wr_hazard",-1,3,0);
	vcdp->declBus(c+1025,"$unit SCR1_CSR_MTVEC_BASE_ZERO_BITS",-1,31,0);
	vcdp->declBus(c+1089,"$unit SCR1_CSR_MTVEC_BASE_VAL_BITS",-1,31,0);
	vcdp->declBus(c+1089,"$unit SCR1_CSR_MTVEC_BASE_RW_BITS",-1,31,0);
	vcdp->declBus(c+1007,"$unit SCR1_BRKM_BRKPT_NUMBER",-1,31,0);
	vcdp->declBus(c+1090,"$unit SCR1_ARCH_RST_VECTOR",-1,31,0);
	vcdp->declBus(c+1091,"$unit SCR1_ARCH_CSR_MTVEC_BASE",-1,31,0);
	vcdp->declBus(c+1092,"$unit SCR1_TCM_ADDR_MASK",-1,31,0);
	vcdp->declBus(c+1093,"$unit SCR1_TCM_ADDR_PATTERN",-1,31,0);
	vcdp->declBus(c+1094,"$unit SCR1_TIMER_ADDR_MASK",-1,31,0);
	vcdp->declBus(c+1095,"$unit SCR1_TIMER_ADDR_PATTERN",-1,31,0);
	vcdp->declBus(c+1096,"$unit SCR1_CSR_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+1097,"$unit SCR1_ARCH_CSR_MTVEC_BASE_RST_VAL",-1,31,6);
	vcdp->declBus(c+1073,"$unit SCR1_CSR_MTVEC_BASE_RO_BITS",-1,31,0);
	vcdp->declBus(c+1008,"$unit SCR1_EXC_CODE_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1098,"$unit SCR1_EXC_CODE_IRQ_M_SOFTWARE",-1,3,0);
	vcdp->declBus(c+1099,"$unit SCR1_EXC_CODE_IRQ_M_TIMER",-1,3,0);
	vcdp->declBus(c+1100,"$unit SCR1_EXC_CODE_IRQ_M_EXTERNAL",-1,3,0);
	vcdp->declBus(c+1101,"$unit SCR1_EXC_CODE_RESET",-1,3,0);
	vcdp->declBus(c+1009,"$unit SCR1_IALU_OP_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1016,"$unit SCR1_IALU_OP_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1102,"$unit SCR1_IALU_CMD_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1103,"$unit SCR1_IALU_CMD_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1009,"$unit SCR1_SUM2_OP_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1016,"$unit SCR1_SUM2_OP_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1104,"$unit SCR1_LSU_CMD_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1010,"$unit SCR1_LSU_CMD_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1009,"$unit SCR1_CSR_OP_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1016,"$unit SCR1_CSR_OP_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1010,"$unit SCR1_CSR_CMD_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1009,"$unit SCR1_CSR_CMD_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1105,"$unit SCR1_RD_WB_ALL_NUM_E",-1,31,0);
	vcdp->declBus(c+1011,"$unit SCR1_RD_WB_WIDTH_E",-1,31,0);
	vcdp->declBus(c+1103,"$unit SCR1_GPR_FIELD_WIDTH",-1,31,0);
	vcdp->declBus(c+1106,"$unit SCR1_IRQ_VECT_NUM",-1,31,0);
	vcdp->declBus(c+1103,"$unit SCR1_IRQ_VECT_WIDTH",-1,31,0);
	vcdp->declBus(c+1106,"$unit SCR1_IRQ_LINES_NUM",-1,31,0);
	vcdp->declBus(c+1010,"$unit SCR1_IRQ_LINES_WIDTH",-1,31,0);
	vcdp->declBus(c+1037,"$unit SCR1_IRQ_VOID_VECT_NUM",-1,4,0);
	vcdp->declBus(c+1010,"$unit SCR1_IRQ_IDX_WIDTH",-1,31,0);
	vcdp->declBus(c+999,"$unit SCR1_IPIC_CISV",-1,2,0);
	vcdp->declBus(c+1107,"$unit SCR1_IPIC_CICSR",-1,2,0);
	vcdp->declBus(c+1000,"$unit SCR1_IPIC_IPR",-1,2,0);
	vcdp->declBus(c+1108,"$unit SCR1_IPIC_ISVR",-1,2,0);
	vcdp->declBus(c+1065,"$unit SCR1_IPIC_EOI",-1,2,0);
	vcdp->declBus(c+1109,"$unit SCR1_IPIC_SOI",-1,2,0);
	vcdp->declBus(c+1110,"$unit SCR1_IPIC_IDX",-1,2,0);
	vcdp->declBus(c+1111,"$unit SCR1_IPIC_ICSR",-1,2,0);
	vcdp->declBus(c+1112,"$unit SCR1_IPIC_ICSR_IP",-1,31,0);
	vcdp->declBus(c+1016,"$unit SCR1_IPIC_ICSR_IE",-1,31,0);
	vcdp->declBus(c+1009,"$unit SCR1_IPIC_ICSR_IM",-1,31,0);
	vcdp->declBus(c+1011,"$unit SCR1_IPIC_ICSR_INV",-1,31,0);
	vcdp->declBus(c+1010,"$unit SCR1_IPIC_ICSR_IS",-1,31,0);
	vcdp->declBus(c+1113,"$unit SCR1_IPIC_ICSR_PRV_LSB",-1,31,0);
	vcdp->declBus(c+1104,"$unit SCR1_IPIC_ICSR_PRV_MSB",-1,31,0);
	vcdp->declBus(c+1114,"$unit SCR1_IPIC_ICSR_LN_LSB",-1,31,0);
	vcdp->declBus(c+1064,"$unit SCR1_IPIC_PRV_M",-1,1,0);
	vcdp->declBus(c+1115,"$unit SCR1_CSR_ADDR_MVENDORID",-1,11,0);
	vcdp->declBus(c+1116,"$unit SCR1_CSR_ADDR_MARCHID",-1,11,0);
	vcdp->declBus(c+1117,"$unit SCR1_CSR_ADDR_MIMPID",-1,11,0);
	vcdp->declBus(c+1118,"$unit SCR1_CSR_ADDR_MHARTID",-1,11,0);
	vcdp->declBus(c+1119,"$unit SCR1_CSR_ADDR_MSTATUS",-1,11,0);
	vcdp->declBus(c+1120,"$unit SCR1_CSR_ADDR_MISA",-1,11,0);
	vcdp->declBus(c+1121,"$unit SCR1_CSR_ADDR_MIE",-1,11,0);
	vcdp->declBus(c+1122,"$unit SCR1_CSR_ADDR_MTVEC",-1,11,0);
	vcdp->declBus(c+1123,"$unit SCR1_CSR_ADDR_MSCRATCH",-1,11,0);
	vcdp->declBus(c+1124,"$unit SCR1_CSR_ADDR_MEPC",-1,11,0);
	vcdp->declBus(c+1125,"$unit SCR1_CSR_ADDR_MCAUSE",-1,11,0);
	vcdp->declBus(c+1126,"$unit SCR1_CSR_ADDR_MTVAL",-1,11,0);
	vcdp->declBus(c+1127,"$unit SCR1_CSR_ADDR_MIP",-1,11,0);
	vcdp->declBus(c+1128,"$unit SCR1_CSR_ADDR_MCYCLE",-1,11,0);
	vcdp->declBus(c+1129,"$unit SCR1_CSR_ADDR_MINSTRET",-1,11,0);
	vcdp->declBus(c+1130,"$unit SCR1_CSR_ADDR_MCYCLEH",-1,11,0);
	vcdp->declBus(c+1131,"$unit SCR1_CSR_ADDR_MINSTRETH",-1,11,0);
	vcdp->declBus(c+1132,"$unit SCR1_CSR_ADDR_TIME",-1,11,0);
	vcdp->declBus(c+1133,"$unit SCR1_CSR_ADDR_CYCLE",-1,11,0);
	vcdp->declBus(c+1134,"$unit SCR1_CSR_ADDR_INSTRET",-1,11,0);
	vcdp->declBus(c+1135,"$unit SCR1_CSR_ADDR_TIMEH",-1,11,0);
	vcdp->declBus(c+1136,"$unit SCR1_CSR_ADDR_CYCLEH",-1,11,0);
	vcdp->declBus(c+1137,"$unit SCR1_CSR_ADDR_INSTRETH",-1,11,0);
	vcdp->declBus(c+1138,"$unit SCR1_CSR_ADDR_HDU_MBASE",-1,11,0);
	vcdp->declBus(c+1139,"$unit SCR1_CSR_ADDR_HDU_MSPAN",-1,11,0);
	vcdp->declBus(c+1140,"$unit SCR1_CSR_ADDR_MCOUNTEN",-1,11,0);
	vcdp->declBus(c+1141,"$unit SCR1_CSR_ADDR_TDU_MBASE",-1,11,0);
	vcdp->declBus(c+1142,"$unit SCR1_CSR_ADDR_TDU_MSPAN",-1,11,0);
	vcdp->declBus(c+1143,"$unit SCR1_CSR_ADDR_IPIC_BASE",-1,11,0);
	vcdp->declBus(c+1143,"$unit SCR1_CSR_ADDR_IPIC_CISV",-1,11,0);
	vcdp->declBus(c+1144,"$unit SCR1_CSR_ADDR_IPIC_CICSR",-1,11,0);
	vcdp->declBus(c+1145,"$unit SCR1_CSR_ADDR_IPIC_IPR",-1,11,0);
	vcdp->declBus(c+1146,"$unit SCR1_CSR_ADDR_IPIC_ISVR",-1,11,0);
	vcdp->declBus(c+1147,"$unit SCR1_CSR_ADDR_IPIC_EOI",-1,11,0);
	vcdp->declBus(c+1148,"$unit SCR1_CSR_ADDR_IPIC_SOI",-1,11,0);
	vcdp->declBus(c+1149,"$unit SCR1_CSR_ADDR_IPIC_IDX",-1,11,0);
	vcdp->declBus(c+1150,"$unit SCR1_CSR_ADDR_IPIC_ICSR",-1,11,0);
	vcdp->declBus(c+1090,"$unit SCR1_RST_VECTOR",-1,31,0);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIE_MSIE_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIE_MTIE_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIE_MEIE_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIP_MSIP_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIP_MTIP_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MIP_MEIP_RST_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MSTATUS_MIE_RST_VAL",-1);
	vcdp->declBit(c+1004,"$unit SCR1_CSR_MSTATUS_MPIE_RST_VAL",-1);
	vcdp->declBus(c+1152,"$unit SCR1_MISA_MXL_32",-1,1,0);
	vcdp->declBus(c+1153,"$unit SCR1_CSR_MISA",-1,31,0);
	vcdp->declBus(c+1154,"$unit SCR1_CSR_MVENDORID",-1,31,0);
	vcdp->declBus(c+1155,"$unit SCR1_CSR_MARCHID",-1,31,0);
	vcdp->declBus(c+1033,"$unit SCR1_CSR_MIMPID",-1,31,0);
	vcdp->declBus(c+1156,"$unit SCR1_CSR_MSTATUS_MPP",-1,1,0);
	vcdp->declBus(c+1020,"$unit SCR1_CSR_MSTATUS_MIE_OFFSET",-1,31,0);
	vcdp->declBus(c+1157,"$unit SCR1_CSR_MSTATUS_MPIE_OFFSET",-1,31,0);
	vcdp->declBus(c+1158,"$unit SCR1_CSR_MSTATUS_MPP_OFFSET",-1,31,0);
	vcdp->declBus(c+1097,"$unit SCR1_CSR_MTVEC_BASE_RST_VAL",-1,31,6);
	vcdp->declBit(c+1151,"$unit SCR1_CSR_MTVEC_MODE_DIRECT",-1);
	vcdp->declBit(c+1004,"$unit SCR1_CSR_MTVEC_MODE_VECTORED",-1);
	vcdp->declBus(c+1020,"$unit SCR1_CSR_MIE_MSIE_OFFSET",-1,31,0);
	vcdp->declBus(c+1157,"$unit SCR1_CSR_MIE_MTIE_OFFSET",-1,31,0);
	vcdp->declBus(c+1158,"$unit SCR1_CSR_MIE_MEIE_OFFSET",-1,31,0);
	vcdp->declBus(c+1073,"$unit SCR1_CSR_MCOUNTEN_CY_OFFSET",-1,31,0);
	vcdp->declBus(c+1007,"$unit SCR1_CSR_MCOUNTEN_IR_OFFSET",-1,31,0);
	vcdp->declBus(c+1024,"$unit SCR1_CSR_COUNTERS_WIDTH",-1,31,0);
	vcdp->declBus(c+1159,"$unit SCR1_CSR_ADDR_HPMCOUNTER_MASK",-1,6,0);
	vcdp->declBus(c+1160,"$unit SCR1_CSR_ADDR_HPMCOUNTERH_MASK",-1,6,0);
	vcdp->declBus(c+1161,"$unit SCR1_CSR_ADDR_MHPMCOUNTER_MASK",-1,6,0);
	vcdp->declBus(c+1162,"$unit SCR1_CSR_ADDR_MHPMCOUNTERH_MASK",-1,6,0);
	vcdp->declBus(c+1163,"$unit SCR1_CSR_ADDR_MHPMEVENT_MASK",-1,6,0);
	vcdp->declBus(c+1008,"$unit SCR1_HDU_DEBUGCSR_ADDR_SPAN",-1,31,0);
	vcdp->declBus(c+1007,"$unit SCR1_HDU_DEBUGCSR_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+1164,"$unit SCR1_HDU_DEBUGCSR_DCSR_XDEBUGVER",-1,3,0);
	vcdp->declBus(c+1165,"$unit SCR1_HDU_PBUF_ADDR_SPAN",-1,31,0);
	vcdp->declBus(c+1020,"$unit SCR1_HDU_PBUF_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+1031,"$unit SCR1_HDU_DATA_REG_WIDTH",-1,31,0);
	vcdp->declBus(c+1031,"$unit SCR1_HDU_CORE_INSTR_WIDTH",-1,31,0);
	vcdp->declBus(c+1166,"$unit SCR1_HDU_DBGCSR_OFFS_DCSR",-1,1,0);
	vcdp->declBus(c+1167,"$unit SCR1_HDU_DBGCSR_OFFS_DPC",-1,1,0);
	vcdp->declBus(c+1053,"$unit SCR1_HDU_DBGCSR_OFFS_DSCRATCH0",-1,1,0);
	vcdp->declBus(c+1064,"$unit SCR1_HDU_DBGCSR_OFFS_DSCRATCH1",-1,1,0);
	vcdp->declBus(c+1138,"$unit SCR1_HDU_DBGCSR_ADDR_DCSR",-1,11,0);
	vcdp->declBus(c+1168,"$unit SCR1_HDU_DBGCSR_ADDR_DPC",-1,11,0);
	vcdp->declBus(c+1169,"$unit SCR1_HDU_DBGCSR_ADDR_DSCRATCH0",-1,11,0);
	vcdp->declBus(c+1170,"$unit SCR1_HDU_DBGCSR_ADDR_DSCRATCH1",-1,11,0);
	vcdp->declBus(c+1007,"$unit SCR1_TDU_MTRIG_NUM",-1,31,0);
	vcdp->declBus(c+1020,"$unit SCR1_TDU_ALLTRIG_NUM",-1,31,0);
	vcdp->declBus(c+1031,"$unit SCR1_TDU_ADDR_W",-1,31,0);
	vcdp->declBus(c+1031,"$unit SCR1_TDU_DATA_W",-1,31,0);
	vcdp->declBus(c+1011,"$unit SCR1_CSR_ADDR_TDU_OFFS_W",-1,31,0);
	vcdp->declBus(c+1171,"$unit SCR1_CSR_ADDR_TDU_OFFS_TSELECT",-1,2,0);
	vcdp->declBus(c+1172,"$unit SCR1_CSR_ADDR_TDU_OFFS_TDATA1",-1,2,0);
	vcdp->declBus(c+1173,"$unit SCR1_CSR_ADDR_TDU_OFFS_TDATA2",-1,2,0);
	vcdp->declBus(c+1174,"$unit SCR1_CSR_ADDR_TDU_OFFS_TINFO",-1,2,0);
	vcdp->declBus(c+1141,"$unit SCR1_CSR_ADDR_TDU_TSELECT",-1,11,0);
	vcdp->declBus(c+1175,"$unit SCR1_CSR_ADDR_TDU_TDATA1",-1,11,0);
	vcdp->declBus(c+1176,"$unit SCR1_CSR_ADDR_TDU_TDATA2",-1,11,0);
	vcdp->declBus(c+1177,"$unit SCR1_CSR_ADDR_TDU_TINFO",-1,11,0);
	vcdp->declBus(c+1178,"$unit SCR1_TDU_TDATA1_TYPE_HI",-1,31,0);
	vcdp->declBus(c+1179,"$unit SCR1_TDU_TDATA1_TYPE_LO",-1,31,0);
	vcdp->declBus(c+1180,"$unit SCR1_TDU_TDATA1_DMODE",-1,31,0);
	vcdp->declBit(c+1151,"$unit SCR1_TDU_TDATA1_DMODE_VAL",-1);
	vcdp->declBus(c+1089,"$unit SCR1_TDU_MCONTROL_MASKMAX_HI",-1,31,0);
	vcdp->declBus(c+1181,"$unit SCR1_TDU_MCONTROL_MASKMAX_LO",-1,31,0);
	vcdp->declBus(c+1182,"$unit SCR1_TDU_MCONTROL_RESERVEDB_HI",-1,31,0);
	vcdp->declBus(c+1181,"$unit SCR1_TDU_MCONTROL_RESERVEDB_LO",-1,31,0);
	vcdp->declBus(c+1182,"$unit SCR1_TDU_MCONTROL_HIT",-1,31,0);
	vcdp->declBus(c+1183,"$unit SCR1_TDU_MCONTROL_SELECT",-1,31,0);
	vcdp->declBus(c+1184,"$unit SCR1_TDU_MCONTROL_TIMING",-1,31,0);
	vcdp->declBus(c+1185,"$unit SCR1_TDU_MCONTROL_ACTION_HI",-1,31,0);
	vcdp->declBus(c+1096,"$unit SCR1_TDU_MCONTROL_ACTION_LO",-1,31,0);
	vcdp->declBus(c+1158,"$unit SCR1_TDU_MCONTROL_CHAIN",-1,31,0);
	vcdp->declBus(c+1074,"$unit SCR1_TDU_MCONTROL_MATCH_HI",-1,31,0);
	vcdp->declBus(c+1157,"$unit SCR1_TDU_MCONTROL_MATCH_LO",-1,31,0);
	vcdp->declBus(c+1025,"$unit SCR1_TDU_MCONTROL_M",-1,31,0);
	vcdp->declBus(c+1070,"$unit SCR1_TDU_MCONTROL_RESERVEDA",-1,31,0);
	vcdp->declBus(c+1008,"$unit SCR1_TDU_MCONTROL_S",-1,31,0);
	vcdp->declBus(c+1020,"$unit SCR1_TDU_MCONTROL_U",-1,31,0);
	vcdp->declBus(c+1007,"$unit SCR1_TDU_MCONTROL_EXECUTE",-1,31,0);
	vcdp->declBus(c+1029,"$unit SCR1_TDU_MCONTROL_STORE",-1,31,0);
	vcdp->declBus(c+1073,"$unit SCR1_TDU_MCONTROL_LOAD",-1,31,0);
	vcdp->declBus(c+1186,"$unit SCR1_TDU_MCONTROL_TYPE_VAL",-1,3,0);
	vcdp->declBit(c+1151,"$unit SCR1_TDU_MCONTROL_SELECT_VAL",-1);
	vcdp->declBit(c+1151,"$unit SCR1_TDU_MCONTROL_TIMING_VAL",-1);
	vcdp->declBus(c+1187,"$unit SCR1_TDU_MCONTROL_MASKMAX_VAL",-1,5,0);
	vcdp->declBit(c+1151,"$unit SCR1_TDU_MCONTROL_RESERVEDA_VAL",-1);
	vcdp->declBus(c+1180,"$unit SCR1_TDU_ICOUNT_DMODE",-1,31,0);
	vcdp->declBus(c+1089,"$unit SCR1_TDU_ICOUNT_RESERVEDB_HI",-1,31,0);
	vcdp->declBus(c+1188,"$unit SCR1_TDU_ICOUNT_RESERVEDB_LO",-1,31,0);
	vcdp->declBus(c+1189,"$unit SCR1_TDU_ICOUNT_HIT",-1,31,0);
	vcdp->declBus(c+1190,"$unit SCR1_TDU_ICOUNT_COUNT_HI",-1,31,0);
	vcdp->declBus(c+1074,"$unit SCR1_TDU_ICOUNT_COUNT_LO",-1,31,0);
	vcdp->declBus(c+1191,"$unit SCR1_TDU_ICOUNT_M",-1,31,0);
	vcdp->declBus(c+1165,"$unit SCR1_TDU_ICOUNT_RESERVEDA",-1,31,0);
	vcdp->declBus(c+1157,"$unit SCR1_TDU_ICOUNT_S",-1,31,0);
	vcdp->declBus(c+1025,"$unit SCR1_TDU_ICOUNT_U",-1,31,0);
	vcdp->declBus(c+1070,"$unit SCR1_TDU_ICOUNT_ACTION_HI",-1,31,0);
	vcdp->declBus(c+1073,"$unit SCR1_TDU_ICOUNT_ACTION_LO",-1,31,0);
	vcdp->declBus(c+1098,"$unit SCR1_TDU_ICOUNT_TYPE_VAL",-1,3,0);
	vcdp->declBus(c+1192,"$unit SCR1_TDU_ICOUNT_RESERVEDB_VAL",-1,1,0);
	vcdp->declBit(c+1151,"$unit SCR1_TDU_ICOUNT_RESERVEDA_VAL",-1);
	vcdp->declBus(c+1193,"$unit SCR1_DBG_DMI_ADDR_WIDTH",-1,5,0);
	vcdp->declBus(c+1194,"$unit SCR1_DBG_DMI_DATA_WIDTH",-1,5,0);
	vcdp->declBus(c+1053,"$unit SCR1_DBG_DMI_OP_WIDTH",-1,1,0);
	vcdp->declBus(c+1053,"$unit SCR1_DBG_DMI_CH_ID_WIDTH",-1,1,0);
	vcdp->declBus(c+1194,"$unit SCR1_DBG_DMI_DR_DTMCS_WIDTH",-1,5,0);
	vcdp->declBus(c+1195,"$unit SCR1_DBG_DMI_DR_DMI_ACCESS_WIDTH",-1,5,0);
	vcdp->declBus(c+1196,"$unit SCR1_DBG_DATA0",-1,6,0);
	vcdp->declBus(c+1197,"$unit SCR1_DBG_DATA1",-1,6,0);
	vcdp->declBus(c+1198,"$unit SCR1_DBG_DMCONTROL",-1,6,0);
	vcdp->declBus(c+1199,"$unit SCR1_DBG_DMSTATUS",-1,6,0);
	vcdp->declBus(c+1200,"$unit SCR1_DBG_HARTINFO",-1,6,0);
	vcdp->declBus(c+1201,"$unit SCR1_DBG_ABSTRACTCS",-1,6,0);
	vcdp->declBus(c+1202,"$unit SCR1_DBG_COMMAND",-1,6,0);
	vcdp->declBus(c+1203,"$unit SCR1_DBG_ABSTRACTAUTO",-1,6,0);
	vcdp->declBus(c+1204,"$unit SCR1_DBG_PROGBUF0",-1,6,0);
	vcdp->declBus(c+1205,"$unit SCR1_DBG_PROGBUF1",-1,6,0);
	vcdp->declBus(c+1206,"$unit SCR1_DBG_PROGBUF2",-1,6,0);
	vcdp->declBus(c+1207,"$unit SCR1_DBG_PROGBUF3",-1,6,0);
	vcdp->declBus(c+1208,"$unit SCR1_DBG_PROGBUF4",-1,6,0);
	vcdp->declBus(c+1209,"$unit SCR1_DBG_PROGBUF5",-1,6,0);
	vcdp->declBus(c+1210,"$unit SCR1_DBG_HALTSUM0",-1,6,0);
	vcdp->declBus(c+1034,"$unit SCR1_DBG_DMCONTROL_HALTREQ",-1,4,0);
	vcdp->declBus(c+1211,"$unit SCR1_DBG_DMCONTROL_RESUMEREQ",-1,4,0);
	vcdp->declBus(c+1212,"$unit SCR1_DBG_DMCONTROL_HARTRESET",-1,4,0);
	vcdp->declBus(c+1213,"$unit SCR1_DBG_DMCONTROL_ACKHAVERESET",-1,4,0);
	vcdp->declBus(c+1214,"$unit SCR1_DBG_DMCONTROL_RESERVEDB",-1,4,0);
	vcdp->declBus(c+1215,"$unit SCR1_DBG_DMCONTROL_HASEL",-1,4,0);
	vcdp->declBus(c+1216,"$unit SCR1_DBG_DMCONTROL_HARTSELLO_HI",-1,4,0);
	vcdp->declBus(c+1037,"$unit SCR1_DBG_DMCONTROL_HARTSELLO_LO",-1,4,0);
	vcdp->declBus(c+1038,"$unit SCR1_DBG_DMCONTROL_HARTSELHI_HI",-1,4,0);
	vcdp->declBus(c+1057,"$unit SCR1_DBG_DMCONTROL_HARTSELHI_LO",-1,4,0);
	vcdp->declBus(c+1217,"$unit SCR1_DBG_DMCONTROL_RESERVEDA_HI",-1,4,0);
	vcdp->declBus(c+1014,"$unit SCR1_DBG_DMCONTROL_RESERVEDA_LO",-1,4,0);
	vcdp->declBus(c+1013,"$unit SCR1_DBG_DMCONTROL_NDMRESET",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_DMCONTROL_DMACTIVE",-1,4,0);
	vcdp->declBus(c+1034,"$unit SCR1_DBG_DMSTATUS_RESERVEDC_HI",-1,4,0);
	vcdp->declBus(c+1218,"$unit SCR1_DBG_DMSTATUS_RESERVEDC_LO",-1,4,0);
	vcdp->declBus(c+1219,"$unit SCR1_DBG_DMSTATUS_IMPEBREAK",-1,4,0);
	vcdp->declBus(c+1220,"$unit SCR1_DBG_DMSTATUS_RESERVEDB_HI",-1,4,0);
	vcdp->declBus(c+1072,"$unit SCR1_DBG_DMSTATUS_RESERVEDB_LO",-1,4,0);
	vcdp->declBus(c+1221,"$unit SCR1_DBG_DMSTATUS_ALLHAVERESET",-1,4,0);
	vcdp->declBus(c+1035,"$unit SCR1_DBG_DMSTATUS_ANYHAVERESET",-1,4,0);
	vcdp->declBus(c+1036,"$unit SCR1_DBG_DMSTATUS_ALLRESUMEACK",-1,4,0);
	vcdp->declBus(c+1037,"$unit SCR1_DBG_DMSTATUS_ANYRESUMEACK",-1,4,0);
	vcdp->declBus(c+1038,"$unit SCR1_DBG_DMSTATUS_ALLNONEXISTENT",-1,4,0);
	vcdp->declBus(c+1039,"$unit SCR1_DBG_DMSTATUS_ANYNONEXISTENT",-1,4,0);
	vcdp->declBus(c+1222,"$unit SCR1_DBG_DMSTATUS_ALLUNAVAIL",-1,4,0);
	vcdp->declBus(c+1040,"$unit SCR1_DBG_DMSTATUS_ANYUNAVAIL",-1,4,0);
	vcdp->declBus(c+1041,"$unit SCR1_DBG_DMSTATUS_ALLRUNNING",-1,4,0);
	vcdp->declBus(c+1042,"$unit SCR1_DBG_DMSTATUS_ANYRUNNING",-1,4,0);
	vcdp->declBus(c+1043,"$unit SCR1_DBG_DMSTATUS_ALLHALTED",-1,4,0);
	vcdp->declBus(c+1071,"$unit SCR1_DBG_DMSTATUS_ANYHALTED",-1,4,0);
	vcdp->declBus(c+1223,"$unit SCR1_DBG_DMSTATUS_AUTHENTICATED",-1,4,0);
	vcdp->declBus(c+1057,"$unit SCR1_DBG_DMSTATUS_AUTHBUSY",-1,4,0);
	vcdp->declBus(c+1217,"$unit SCR1_DBG_DMSTATUS_RESERVEDA",-1,4,0);
	vcdp->declBus(c+1044,"$unit SCR1_DBG_DMSTATUS_DEVTREEVALID",-1,4,0);
	vcdp->declBus(c+1045,"$unit SCR1_DBG_DMSTATUS_VERSION_HI",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_DMSTATUS_VERSION_LO",-1,4,0);
	vcdp->declBus(c+1034,"$unit SCR1_DBG_COMMAND_TYPE_HI",-1,4,0);
	vcdp->declBus(c+1224,"$unit SCR1_DBG_COMMAND_TYPE_LO",-1,4,0);
	vcdp->declBus(c+1218,"$unit SCR1_DBG_COMMAND_ACCESSREG_RESERVEDB",-1,4,0);
	vcdp->declBus(c+1219,"$unit SCR1_DBG_COMMAND_ACCESSREG_SIZE_HI",-1,4,0);
	vcdp->declBus(c+1072,"$unit SCR1_DBG_COMMAND_ACCESSREG_SIZE_LO",-1,4,0);
	vcdp->declBus(c+1221,"$unit SCR1_DBG_COMMAND_ACCESSREG_RESERVEDA",-1,4,0);
	vcdp->declBus(c+1035,"$unit SCR1_DBG_COMMAND_ACCESSREG_POSTEXEC",-1,4,0);
	vcdp->declBus(c+1036,"$unit SCR1_DBG_COMMAND_ACCESSREG_TRANSFER",-1,4,0);
	vcdp->declBus(c+1037,"$unit SCR1_DBG_COMMAND_ACCESSREG_WRITE",-1,4,0);
	vcdp->declBus(c+1038,"$unit SCR1_DBG_COMMAND_ACCESSREG_REGNO_HI",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_COMMAND_ACCESSREG_REGNO_LO",-1,4,0);
	vcdp->declBus(c+1218,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMVIRTUAL",-1,4,0);
	vcdp->declBus(c+1219,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_HI",-1,4,0);
	vcdp->declBus(c+1072,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_LO",-1,4,0);
	vcdp->declBus(c+1221,"$unit SCR1_DBG_COMMAND_ACCESSMEM_AAMPOSTINC",-1,4,0);
	vcdp->declBus(c+1035,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_HI",-1,4,0);
	vcdp->declBus(c+1036,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_LO",-1,4,0);
	vcdp->declBus(c+1037,"$unit SCR1_DBG_COMMAND_ACCESSMEM_WRITE",-1,4,0);
	vcdp->declBus(c+1222,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_HI",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_LO",-1,4,0);
	vcdp->declBus(c+1034,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDD_HI",-1,4,0);
	vcdp->declBus(c+1212,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDD_LO",-1,4,0);
	vcdp->declBus(c+1213,"$unit SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_HI",-1,4,0);
	vcdp->declBus(c+1224,"$unit SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_LO",-1,4,0);
	vcdp->declBus(c+1218,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDC_HI",-1,4,0);
	vcdp->declBus(c+1222,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDC_LO",-1,4,0);
	vcdp->declBus(c+1040,"$unit SCR1_DBG_ABSTRACTCS_BUSY",-1,4,0);
	vcdp->declBus(c+1041,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDB",-1,4,0);
	vcdp->declBus(c+1042,"$unit SCR1_DBG_ABSTRACTCS_CMDERR_HI",-1,4,0);
	vcdp->declBus(c+1071,"$unit SCR1_DBG_ABSTRACTCS_CMDERR_LO",-1,4,0);
	vcdp->declBus(c+1223,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDA_HI",-1,4,0);
	vcdp->declBus(c+1044,"$unit SCR1_DBG_ABSTRACTCS_RESERVEDA_LO",-1,4,0);
	vcdp->declBus(c+1045,"$unit SCR1_DBG_ABSTRACTCS_DATACOUNT_HI",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_ABSTRACTCS_DATACOUNT_LO",-1,4,0);
	vcdp->declBus(c+1034,"$unit SCR1_DBG_HARTINFO_RESERVEDB_HI",-1,4,0);
	vcdp->declBus(c+1224,"$unit SCR1_DBG_HARTINFO_RESERVEDB_LO",-1,4,0);
	vcdp->declBus(c+1218,"$unit SCR1_DBG_HARTINFO_NSCRATCH_HI",-1,4,0);
	vcdp->declBus(c+1072,"$unit SCR1_DBG_HARTINFO_NSCRATCH_LO",-1,4,0);
	vcdp->declBus(c+1221,"$unit SCR1_DBG_HARTINFO_RESERVEDA_HI",-1,4,0);
	vcdp->declBus(c+1036,"$unit SCR1_DBG_HARTINFO_RESERVEDA_LO",-1,4,0);
	vcdp->declBus(c+1037,"$unit SCR1_DBG_HARTINFO_DATAACCESS",-1,4,0);
	vcdp->declBus(c+1038,"$unit SCR1_DBG_HARTINFO_DATASIZE_HI",-1,4,0);
	vcdp->declBus(c+1040,"$unit SCR1_DBG_HARTINFO_DATASIZE_LO",-1,4,0);
	vcdp->declBus(c+1041,"$unit SCR1_DBG_HARTINFO_DATAADDR_HI",-1,4,0);
	vcdp->declBus(c+1012,"$unit SCR1_DBG_HARTINFO_DATAADDR_LO",-1,4,0);
	vcdp->declBus(c+1068,"$unit SCR1_AHB_WIDTH",-1,31,0);
	vcdp->declBus(c+1166,"$unit SCR1_HTRANS_IDLE",-1,1,0);
	vcdp->declBus(c+1053,"$unit SCR1_HTRANS_NONSEQ",-1,1,0);
	vcdp->declBus(c+1166,"$unit SCR1_HTRANS_ERR",-1,1,0);
	vcdp->declBus(c+999,"$unit SCR1_HBURST_SINGLE",-1,2,0);
	vcdp->declBus(c+999,"$unit SCR1_HBURST_ERR",-1,2,0);
	vcdp->declBus(c+999,"$unit SCR1_HSIZE_8B",-1,2,0);
	vcdp->declBus(c+1107,"$unit SCR1_HSIZE_16B",-1,2,0);
	vcdp->declBus(c+1000,"$unit SCR1_HSIZE_32B",-1,2,0);
	vcdp->declBus(c+999,"$unit SCR1_HSIZE_ERR",-1,2,0);
	vcdp->declBus(c+1112,"$unit SCR1_HPROT_DATA",-1,31,0);
	vcdp->declBus(c+1016,"$unit SCR1_HPROT_PRV",-1,31,0);
	vcdp->declBus(c+1009,"$unit SCR1_HPROT_BUF",-1,31,0);
	vcdp->declBus(c+1011,"$unit SCR1_HPROT_CACHE",-1,31,0);
	vcdp->declBit(c+998,"$unit SCR1_HRESP_OKAY",-1);
	vcdp->declBit(c+1001,"$unit SCR1_HRESP_ERROR",-1);
	vcdp->declBit(c+998,"$unit SCR1_HRESP_ERR",-1);
	vcdp->declBus(c+1008,"scr1_tapc_pkg SCR1_TAP_STATE_WIDTH",-1,31,0);
	vcdp->declBus(c+1070,"scr1_tapc_pkg SCR1_TAP_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus(c+1031,"scr1_tapc_pkg SCR1_TAP_DR_IDCODE_WIDTH",-1,31,0);
	vcdp->declBus(c+1031,"scr1_tapc_pkg SCR1_TAP_DR_BLD_ID_WIDTH",-1,31,0);
	vcdp->declBus(c+1029,"scr1_tapc_pkg SCR1_TAP_DR_BYPASS_WIDTH",-1,31,0);
	vcdp->declBus(c+1033,"scr1_tapc_pkg SCR1_TAP_BLD_ID_VALUE",-1,31,0);
    }
}

void Vscr1_top_tb_ahb::traceFullThis__1(Vscr1_top_tb_ahb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vscr1_top_tb_ahb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->scr1_top_tb_ahb__DOT__rtc_clk));
	vcdp->fullBus(c+2,(vlTOPp->scr1_top_tb_ahb__DOT__fuse_mhartid),32);
	vcdp->fullBus(c+3,(vlTOPp->scr1_top_tb_ahb__DOT__imem_req_ack_stall),32);
	vcdp->fullBus(c+4,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_req_ack_stall),32);
	vcdp->fullBit(c+5,(vlTOPp->scr1_top_tb_ahb__DOT__trst_n));
	vcdp->fullBit(c+6,(vlTOPp->scr1_top_tb_ahb__DOT__tck));
	vcdp->fullBit(c+7,(vlTOPp->scr1_top_tb_ahb__DOT__tms));
	vcdp->fullBit(c+8,(vlTOPp->scr1_top_tb_ahb__DOT__tdi));
	vcdp->fullBus(c+9,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hprot),4);
	vcdp->fullBus(c+10,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hprot),4);
	vcdp->fullBit(c+11,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__tracelog_full));
	vcdp->fullBus(c+12,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__temp_fhandler),32);
	vcdp->fullBus(c+13,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be),4);
	vcdp->fullBus(c+14,(vlTOPp->scr1_top_tb_ahb__DOT__f_results),32);
	vcdp->fullBus(c+15,(vlTOPp->scr1_top_tb_ahb__DOT__f_info),32);
	vcdp->fullBus(c+16,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_cmb),32);
	vcdp->fullBit(c+17,((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			      & (((((((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command_cmb) 
					  | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command_cmb)) 
					 | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto_cmb)) 
					| (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0_cmb)) 
				       | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1_cmb)) 
				      | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0_cmb)) 
				     | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1_cmb)) 
				    | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2_cmb)) 
				   | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3_cmb)) 
				  | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4_cmb)) 
				 | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5_cmb))) 
			     | ((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
				& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)))));
	vcdp->fullBus(c+18,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
			      ? (((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
				  | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
				  ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
				  : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)
			      : 0U)),32);
	vcdp->fullBit(c+19,(((((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb)) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb)) 
			     | ((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
				& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff)))));
	vcdp->fullBit(c+20,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__reset_n_sync));
	vcdp->fullBus(c+21,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__trst_n) 
			      << 1U) | (1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
					      >> 1U)))),2);
	vcdp->fullBit(c+22,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack));
	vcdp->fullBit(c+23,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack));
	vcdp->fullBit(c+24,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dr_update));
	vcdp->fullBit(c+25,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg_wr));
	vcdp->fullBit(c+26,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr));
	vcdp->fullBit(c+27,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg_wr));
	vcdp->fullBit(c+28,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				   >> 3U))));
	vcdp->fullBit(c+29,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				   >> 2U))));
	vcdp->fullBit(c+30,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data) 
				   >> 1U))));
	vcdp->fullBit(c+31,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data))));
	vcdp->fullBit(c+32,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
				   >> 3U))));
	vcdp->fullBit(c+33,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
				   >> 2U))));
	vcdp->fullBus(c+34,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))),2);
	vcdp->fullBit(c+35,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_err));
	vcdp->fullBus(c+36,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg
			      : 0U)),32);
	vcdp->fullBit(c+37,(((3U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
			     | ((2U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy)) 
				& (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy))))));
	vcdp->fullBit(c+38,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy))));
	vcdp->fullQuad(c+39,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata_cmb),41);
	vcdp->fullBus(c+41,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_cmb),2);
	vcdp->fullBit(c+42,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc));
	vcdp->fullBit(c+43,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq));
	vcdp->fullBit(c+44,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi));
	vcdp->fullBit(c+45,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie))));
	vcdp->fullBit(c+46,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie));
	vcdp->fullBit(c+47,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_empty));
	vcdp->fullBus(c+48,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h),3);
	vcdp->fullBit(c+49,((1U & (~ (IData)((3U == 
					      (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))))));
	vcdp->fullBit(c+50,((3U == (3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))));
	vcdp->fullBus(c+51,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head),16);
	vcdp->fullBit(c+52,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head));
	vcdp->fullBit(c+53,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_next));
	vcdp->fullBus(c+54,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus),32);
	vcdp->fullBus(c+55,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie),32);
	vcdp->fullBus(c+56,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip),32);
	vcdp->fullBus(c+57,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ext_irq) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie))
			      ? 0xbU : (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) 
					 & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie))
					 ? 7U : 0xbU))),4);
	vcdp->fullQuad(c+58,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret),64);
	vcdp->fullQuad(c+60,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle),64);
	vcdp->fullBus(c+62,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten),32);
	vcdp->fullBit(c+63,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_inc_hi));
	vcdp->fullBit(c+64,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				   >> 8U))));
	vcdp->fullBit(c+65,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				   >> 7U))));
	vcdp->fullBit(c+66,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				   >> 6U))));
	vcdp->fullBit(c+67,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				   >> 5U))));
	vcdp->fullBit(c+68,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m) 
				   >> 4U))));
	vcdp->fullBus(c+69,((0xfU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_m))),4);
	vcdp->fullBit(c+70,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m) 
				   >> 1U))));
	vcdp->fullBit(c+71,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_m))));
	vcdp->fullBus(c+72,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_eoi_m),16);
	vcdp->fullBus(c+73,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]),32);
	vcdp->fullBus(c+74,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U]),32);
	vcdp->fullBus(c+75,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]),32);
	vcdp->fullBus(c+76,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]),32);
	vcdp->fullBus(c+77,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U]),32);
	vcdp->fullBus(c+78,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U]),32);
	vcdp->fullBus(c+79,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]),32);
	vcdp->fullBus(c+80,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))
			      ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
						>> 0x20U)))
				  ? 2U : 1U) : 0U)),2);
	vcdp->fullBit(c+81,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready))));
	vcdp->fullBit(c+82,((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
				| (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
			       | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
			      & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)))));
	vcdp->fullBit(c+83,(((((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
				 | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)) 
				| (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
			       & (~ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				     >> 3U))) & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit))) 
			     | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
				& (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up))))));
	vcdp->fullBus(c+84,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
			      ? 0U : ((4U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
				       ? ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
						    ? 
						   (0xffffU 
						    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)
						    : 
						   (0xffU 
						    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
				       : ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
					   ? ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
					       ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
					       : VL_EXTENDS_II(32,16, 
							       (0xffffU 
								& vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
					   : ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r))
					       ? VL_EXTENDS_II(32,8, 
							       (0xffU 
								& vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))
					       : 0U))))),32);
	vcdp->fullBus(c+85,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
				    ? ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new) 
				       - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
					  & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack)))
				    : (((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
					& (~ (IData)(
						     (0U 
						      != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt)))))
				        ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new)
				        : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt) 
					   - (IData)(1U)))))),3);
	vcdp->fullBus(c+86,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
			      ? ((1U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					 >> 0x18U) 
					| ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					    >> 0x17U) 
					   & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))))
				  ? (0xfffffffeU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res))
				  : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
			      : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
	vcdp->fullBus(c+87,(((8U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
			      ? 0U : ((4U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
				       ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)
				       : ((2U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
					   ? ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
					       ? ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)
						   ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc
						   : 
						  ((0U 
						    != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb))
						    ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)
						    : 0U))
					       : ((0x10U 
						   & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])
						   ? 
						  ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						    << 0x1bU) 
						   | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						      >> 5U))
						   : 
						  (0x73U 
						   | ((0xfff00000U 
						       & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
							  << 0xfU)) 
						      | ((0xf8000U 
							  & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
							 | ((0x7000U 
							     & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
								 << 0x1bU) 
								| (0x7fff000U 
								   & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
								      >> 5U)))) 
							    | (0xf80U 
							       & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
								  << 2U))))))))
					   : ((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
					       ? ((0x400U 
						   & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
						   ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
						   : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)
					       : 0U))))),32);
	vcdp->fullBus(c+88,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
			      ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data
			      : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc)),32);
	vcdp->fullBit(c+89,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd)
			      ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)
			      : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r))));
	vcdp->fullBit(c+90,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted)) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond))));
	vcdp->fullBit(c+91,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
			     & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access)))));
	vcdp->fullBus(c+92,((7U & ((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
						  - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))))),3);
	vcdp->fullBus(c+93,((3U & (((IData)(4U) - ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
						   - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
				   >> 1U))),2);
	vcdp->fullBit(c+94,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
			     ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req))));
	vcdp->fullBit(c+95,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
			     ^ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req))));
	vcdp->fullBit(c+96,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req))));
	vcdp->fullBit(c+97,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
			     & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
				& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))));
	vcdp->fullBit(c+98,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
			     & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req))));
	vcdp->fullBit(c+99,(((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
			     & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
				& (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))));
	vcdp->fullBus(c+100,((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc 
			      & VL_NEGATE_I((IData)((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))))),32);
	vcdp->fullBit(c+101,(vlTOPp->scr1_top_tb_ahb__DOT__rst_n));
	vcdp->fullBit(c+102,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en));
	vcdp->fullBit(c+103,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load));
	vcdp->fullBit(c+104,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset));
	vcdp->fullBit(c+105,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req));
	vcdp->fullBus(c+106,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr),7);
	vcdp->fullQuad(c+107,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_shift_cmb),41);
	vcdp->fullBit(c+109,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
			      & (0x16U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)))));
	vcdp->fullBit(c+110,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto_cmb));
	vcdp->fullBit(c+111,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command_cmb));
	vcdp->fullBit(c+112,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command_cmb));
	vcdp->fullBit(c+113,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0_cmb));
	vcdp->fullBit(c+114,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1_cmb));
	vcdp->fullBit(c+115,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0_cmb));
	vcdp->fullBit(c+116,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1_cmb));
	vcdp->fullBit(c+117,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2_cmb));
	vcdp->fullBit(c+118,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3_cmb));
	vcdp->fullBit(c+119,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4_cmb));
	vcdp->fullBit(c+120,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5_cmb));
	vcdp->fullBit(c+121,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
			      & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))));
	vcdp->fullBit(c+122,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout));
	vcdp->fullBus(c+123,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id_tapout),2);
	vcdp->fullBit(c+124,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout));
	vcdp->fullBit(c+125,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out));
	vcdp->fullBit(c+126,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel));
	vcdp->fullBit(c+127,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel));
	vcdp->fullBit(c+128,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel));
	vcdp->fullBit(c+129,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out));
	vcdp->fullBit(c+130,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hready));
	vcdp->fullBus(c+131,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hrdata),32);
	vcdp->fullBit(c+132,(vlTOPp->scr1_top_tb_ahb__DOT__imem_hresp));
	vcdp->fullBit(c+133,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready));
	vcdp->fullBus(c+134,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hrdata),32);
	vcdp->fullBit(c+135,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hresp));
	vcdp->fullBus(c+136,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo)),32);
	vcdp->fullBus(c+137,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata),32);
	vcdp->fullBit(c+138,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__resp_fifo 
					    >> 0x20U)))));
	vcdp->fullBit(c+139,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					    >> 0x25U)))));
	vcdp->fullBus(c+140,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					    >> 0x22U)))),3);
	vcdp->fullBus(c+141,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
					    >> 0x20U)))),2);
	vcdp->fullBus(c+142,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo)),32);
	vcdp->fullBus(c+143,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))
			       ? ((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
						 >> 0x25U)))
				   ? 2U : 1U) : 0U)),2);
	vcdp->fullBit(c+144,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__dmem_hready))));
	vcdp->fullBus(c+145,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_write_en),2);
	vcdp->fullBit(c+146,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_write_en));
	vcdp->fullBus(c+147,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__cmd_data),4);
	vcdp->fullBus(c+148,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__reg_data),4);
	vcdp->fullBit(c+149,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				    >> 3U))));
	vcdp->fullBit(c+150,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				    >> 2U))));
	vcdp->fullBit(c+151,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge) 
				    >> 1U))));
	vcdp->fullBit(c+152,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_posedge))));
	vcdp->fullBus(c+153,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata),32);
	vcdp->fullBus(c+154,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp),2);
	vcdp->fullBus(c+155,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata),32);
	vcdp->fullBus(c+156,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp),2);
	vcdp->fullBit(c+157,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
	vcdp->fullBit(c+158,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
	vcdp->fullBit(c+159,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
	vcdp->fullBus(c+160,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next),3);
	vcdp->fullBus(c+161,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_we),2);
	vcdp->fullBit(c+162,((1U & (~ (((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)) 
					| (5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident))) 
				       | (3U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident)))))));
	vcdp->fullBus(c+163,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_ident),3);
	vcdp->fullBit(c+164,(((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)) 
			      | (2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)))));
	vcdp->fullBit(c+165,((1U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
	vcdp->fullBit(c+166,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
	vcdp->fullBit(c+167,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_rctl));
	vcdp->fullBit(c+168,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_cmd));
	vcdp->fullBus(c+169,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width),2);
	vcdp->fullBus(c+170,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr),32);
	vcdp->fullBit(c+171,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err));
	vcdp->fullBit(c+172,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 0xaU))));
	vcdp->fullBit(c+173,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 9U))));
	vcdp->fullBus(c+174,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       >> 4U))),5);
	vcdp->fullBit(c+175,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 3U))));
	vcdp->fullBus(c+176,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						 >> 0x1fU)))),4);
	vcdp->fullBit(c+177,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x1eU))));
	vcdp->fullBus(c+178,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				     << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					       >> 0x1cU)))),2);
	vcdp->fullBus(c+179,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				     << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					       >> 0x19U)))),3);
	vcdp->fullBit(c+180,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x18U))));
	vcdp->fullBit(c+181,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x17U))));
	vcdp->fullBit(c+182,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x16U))));
	vcdp->fullBit(c+183,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x15U))));
	vcdp->fullBit(c+184,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x14U))));
	vcdp->fullBus(c+185,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x11U) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 0xfU)))),5);
	vcdp->fullBus(c+186,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x16U) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 0xaU)))),5);
	vcdp->fullBus(c+187,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x1bU) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 5U)))),5);
	vcdp->fullBus(c+188,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
			       << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					    >> 5U))),32);
	vcdp->fullBit(c+189,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
				    >> 4U))));
	vcdp->fullBus(c+190,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
	vcdp->fullBit(c+191,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1));
	vcdp->fullBit(c+192,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2));
	vcdp->fullBit(c+193,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd));
	vcdp->fullBit(c+194,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm));
	vcdp->fullBus(c+195,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x1bU) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 5U)))),5);
	vcdp->fullBus(c+196,((0xfffU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					 << 0x1bU) 
					| (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					   >> 5U)))),12);
	vcdp->fullBus(c+197,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				     << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					       >> 0x1cU)))),2);
	vcdp->fullBus(c+198,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				     << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						  >> 5U)))),3);
	vcdp->fullBus(c+199,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				     << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						  >> 5U)))),2);
	vcdp->fullBus(c+200,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)),2);
	vcdp->fullBus(c+201,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				       >> 2U))),5);
	vcdp->fullBit(c+202,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal));
	vcdp->fullBus(c+203,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3),3);
	vcdp->fullBus(c+204,((0x7fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				       >> 0x19U))),7);
	vcdp->fullBus(c+205,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
					>> 0x14U))),12);
	vcdp->fullBus(c+206,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
				       >> 0x14U))),5);
	vcdp->fullBit(c+207,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal));
	vcdp->fullBit(c+208,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 0xaU))));
	vcdp->fullBit(c+209,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 9U))));
	vcdp->fullBus(c+210,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       >> 4U))),5);
	vcdp->fullBit(c+211,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 3U))));
	vcdp->fullBus(c+212,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						 >> 0x1fU)))),4);
	vcdp->fullBit(c+213,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x1eU))));
	vcdp->fullBus(c+214,((3U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				     << 4U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					       >> 0x1cU)))),2);
	vcdp->fullBus(c+215,((7U & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				     << 7U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					       >> 0x19U)))),3);
	vcdp->fullBit(c+216,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x18U))));
	vcdp->fullBit(c+217,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x17U))));
	vcdp->fullBit(c+218,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x16U))));
	vcdp->fullBit(c+219,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x15U))));
	vcdp->fullBit(c+220,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				    >> 0x14U))));
	vcdp->fullBus(c+221,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x11U) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 0xfU)))),5);
	vcdp->fullBus(c+222,((0x1fU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
					<< 0x16U) | 
				       (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
					>> 0xaU)))),5);
	vcdp->fullBus(c+223,(((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
			       << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
					    >> 5U))),32);
	vcdp->fullBit(c+224,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
				    >> 4U))));
	vcdp->fullBus(c+225,((0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
	vcdp->fullBus(c+226,(((8U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U])
			       ? ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						>> 5U))
			       : ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
				   << 0x1bU) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
						>> 5U)))),32);
	vcdp->fullBit(c+227,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				    >> 0xaU))));
	vcdp->fullBus(c+228,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc),32);
	vcdp->fullBus(c+229,((0x1fU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       >> 4U))),5);
	vcdp->fullBus(c+230,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd),2);
	vcdp->fullBus(c+231,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd),2);
	vcdp->fullBus(c+232,((0xfU & ((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
				       << 1U) | (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
						 >> 0x1fU)))),4);
	vcdp->fullBit(c+233,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req));
	vcdp->fullBit(c+234,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req));
	vcdp->fullBus(c+235,(((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
			       ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width)
			       : 0U)),2);
	vcdp->fullBit(c+236,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd) 
			      & (3U == (0xfU & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])))));
	vcdp->fullBit(c+237,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					    >> 0x22U)))));
	vcdp->fullBit(c+238,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					    >> 0x21U)))));
	vcdp->fullBit(c+239,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon 
					    >> 0x20U)))));
	vcdp->fullBus(c+240,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon)),32);
	vcdp->fullBus(c+241,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
			       ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
			       : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)),32);
	vcdp->fullBus(c+242,(vlTOPp->scr1_top_tb_ahb__DOT__imem_htrans),2);
	vcdp->fullBus(c+243,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
	vcdp->fullBus(c+244,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
	vcdp->fullBus(c+245,(vlTOPp->scr1_top_tb_ahb__DOT__dmem_htrans),2);
	vcdp->fullBus(c+246,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
	vcdp->fullBit(c+247,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
				    >> 3U))));
	vcdp->fullBit(c+248,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
	vcdp->fullBit(c+249,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req));
	vcdp->fullBus(c+250,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr),32);
	vcdp->fullBit(c+251,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack));
	vcdp->fullBit(c+252,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req));
	vcdp->fullBus(c+253,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res)),32);
	vcdp->fullBus(c+254,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data),32);
	vcdp->fullBit(c+255,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req));
	vcdp->fullBus(c+256,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_addr),32);
	vcdp->fullBit(c+257,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req));
	vcdp->fullBit(c+258,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_cmd));
	vcdp->fullBus(c+259,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_width),2);
	vcdp->fullBus(c+260,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_addr),32);
	vcdp->fullBus(c+261,(((0U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
			       ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data
			       : 0U)),32);
	vcdp->fullBit(c+262,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
	vcdp->fullBus(c+263,(((0x480000U == (0xffff0000U 
					     & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
			       ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
			       : 0U)),32);
	vcdp->fullBit(c+264,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
	vcdp->fullBit(c+265,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_cmd));
	vcdp->fullBus(c+266,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_width),2);
	vcdp->fullBus(c+267,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr),32);
	vcdp->fullBus(c+268,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_wdata),32);
	vcdp->fullBit(c+269,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req));
	vcdp->fullBit(c+270,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_cmd));
	vcdp->fullBus(c+271,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_addr),32);
	vcdp->fullBus(c+272,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_wdata),32);
	vcdp->fullBit(c+273,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel));
	vcdp->fullBit(c+274,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_req_qlfy));
	vcdp->fullBit(c+275,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel))));
	vcdp->fullBit(c+276,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wr_qlfy));
	vcdp->fullBus(c+277,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data),32);
	vcdp->fullBus(c+278,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_dreg_wdata_qlfy),32);
	vcdp->fullBit(c+279,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_sync));
	vcdp->fullBit(c+280,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__hdu_rst_n_sync));
	vcdp->fullBit(c+281,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
	vcdp->fullBit(c+282,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_in_mux));
	vcdp->fullBit(c+283,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
	vcdp->fullBus(c+284,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc),32);
	vcdp->fullBit(c+285,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
	vcdp->fullBit(c+286,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret));
	vcdp->fullBit(c+287,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
			      & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req)))));
	vcdp->fullBit(c+288,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw));
	vcdp->fullBit(c+289,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
	vcdp->fullBit(c+290,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2idu_rdy));
	vcdp->fullBus(c+291,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs1_addr),5);
	vcdp->fullBus(c+292,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data),32);
	vcdp->fullBus(c+293,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rs2_addr),5);
	vcdp->fullBit(c+294,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
	vcdp->fullBus(c+295,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data),32);
	vcdp->fullBit(c+296,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req));
	vcdp->fullBus(c+297,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data),32);
	vcdp->fullBit(c+298,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req));
	vcdp->fullBus(c+299,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data),32);
	vcdp->fullBit(c+300,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc));
	vcdp->fullBit(c+301,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq));
	vcdp->fullBit(c+302,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
	vcdp->fullBit(c+303,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr));
	vcdp->fullBus(c+304,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code),4);
	vcdp->fullBus(c+305,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_new_pc),32);
	vcdp->fullBit(c+306,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
	vcdp->fullBit(c+307,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req));
	vcdp->fullBit(c+308,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
	vcdp->fullBus(c+309,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr),3);
	vcdp->fullBus(c+310,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata),32);
	vcdp->fullBus(c+311,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata),32);
	vcdp->fullBit(c+312,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req));
	vcdp->fullBus(c+313,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata),32);
	vcdp->fullBit(c+314,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_resp));
	vcdp->fullBit(c+315,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy));
	vcdp->fullBus(c+316,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_wdata_qlfy),32);
	vcdp->fullBit(c+317,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
					    >> 0x21U)))));
	vcdp->fullBit(c+318,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon 
					    >> 0x20U)))));
	vcdp->fullBus(c+319,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon)),32);
	vcdp->fullBus(c+320,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_match),3);
	vcdp->fullBus(c+321,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb),2);
	vcdp->fullBit(c+322,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req));
	vcdp->fullBit(c+323,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2lsu_i_x_req));
	vcdp->fullBit(c+324,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_ldst_hit_cmb))));
	vcdp->fullBus(c+325,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire),3);
	vcdp->fullBit(c+326,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
					    >> 0x21U)))));
	vcdp->fullBit(c+327,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy 
					    >> 0x20U)))));
	vcdp->fullBus(c+328,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_i_mon_qlfy)),32);
	vcdp->fullBit(c+329,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					    >> 0x22U)))));
	vcdp->fullBit(c+330,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					    >> 0x21U)))));
	vcdp->fullBit(c+331,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy 
					    >> 0x20U)))));
	vcdp->fullBus(c+332,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__lsu2tdu_d_mon_qlfy)),32);
	vcdp->fullBus(c+333,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy),3);
	vcdp->fullBit(c+334,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req));
	vcdp->fullBus(c+335,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data),32);
	vcdp->fullBit(c+336,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req_qlfy));
	vcdp->fullBus(c+337,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_wdata_qlfy),32);
	vcdp->fullBit(c+338,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
	vcdp->fullBit(c+339,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit));
	vcdp->fullBit(c+340,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run2halt));
	vcdp->fullBit(c+341,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd));
	vcdp->fullBit(c+342,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2hdu_pbuf_rdy_qlfy));
	vcdp->fullBit(c+343,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy));
	vcdp->fullBit(c+344,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy));
	vcdp->fullBit(c+345,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
	vcdp->fullBus(c+346,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r_new),30);
	vcdp->fullBus(c+347,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending_new),3);
	vcdp->fullBit(c+348,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush));
	vcdp->fullBus(c+349,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next),3);
	vcdp->fullBus(c+350,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_re),2);
	vcdp->fullBit(c+351,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd));
	vcdp->fullBit(c+352,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
	vcdp->fullBit(c+353,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy));
	vcdp->fullBit(c+354,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
	vcdp->fullBus(c+355,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op1),32);
	vcdp->fullBus(c+356,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_op2),32);
	vcdp->fullBus(c+357,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_res),32);
	vcdp->fullBit(c+358,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp));
	vcdp->fullBit(c+359,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req));
	vcdp->fullBit(c+360,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc));
	vcdp->fullBus(c+361,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_code),4);
	vcdp->fullBit(c+362,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_req));
	vcdp->fullBit(c+363,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_cond));
	vcdp->fullBus(c+364,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__next_state),2);
	vcdp->fullBit(c+365,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_req));
	vcdp->fullBit(c+366,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__iter_rdy));
	vcdp->fullBus(c+367,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd),2);
	vcdp->fullBus(c+368,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd),2);
	vcdp->fullBit(c+369,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__corr_req));
	vcdp->fullBit(c+370,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_sub));
	vcdp->fullBus(c+371,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op1),32);
	vcdp->fullBus(c+372,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_op2),32);
	vcdp->fullQuad(c+373,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res),33);
	vcdp->fullBit(c+375,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				    >> 3U))));
	vcdp->fullBit(c+376,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				    >> 2U))));
	vcdp->fullBit(c+377,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags) 
				    >> 1U))));
	vcdp->fullBit(c+378,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_flags))));
	vcdp->fullBit(c+379,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_sub));
	vcdp->fullQuad(c+380,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op1),33);
	vcdp->fullQuad(c+382,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_op2),33);
	vcdp->fullQuad(c+384,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum2_res),33);
	vcdp->fullBus(c+386,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1),32);
	vcdp->fullBus(c+387,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2),5);
	vcdp->fullBus(c+388,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res),32);
	vcdp->fullQuad(c+389,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op1),33);
	vcdp->fullQuad(c+391,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_op2),33);
	vcdp->fullQuad(c+393,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_res),64);
	vcdp->fullBus(c+395,((0x1fU & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__sum1_res))),5);
	vcdp->fullBit(c+396,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c));
	vcdp->fullBus(c+397,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1),32);
	vcdp->fullBus(c+398,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2),32);
	vcdp->fullBus(c+399,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3),32);
	vcdp->fullBit(c+400,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn));
	vcdp->fullBit(c+401,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv));
	vcdp->fullBit(c+402,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__sgn));
	vcdp->fullBit(c+403,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk2__DOT__inv));
	vcdp->fullBus(c+404,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__prev_low),31);
	vcdp->fullBit(c+405,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk3__DOT__quo));
	vcdp->fullBit(c+406,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__l_misalign));
	vcdp->fullBit(c+407,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__s_misalign));
	vcdp->fullBit(c+408,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_hwbrk));
	vcdp->fullQuad(c+409,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi_new),56);
	vcdp->fullBus(c+411,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo_new),8);
	vcdp->fullQuad(c+412,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi_new),56);
	vcdp->fullBus(c+414,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo_new),8);
	vcdp->fullBit(c+415,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc));
	vcdp->fullBit(c+416,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_up));
	vcdp->fullBit(c+417,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_up));
	vcdp->fullBit(c+418,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_up));
	vcdp->fullBit(c+419,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_up));
	vcdp->fullBit(c+420,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_up));
	vcdp->fullBit(c+421,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_up));
	vcdp->fullBit(c+422,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_up));
	vcdp->fullBus(c+423,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_up),2);
	vcdp->fullBus(c+424,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_up),2);
	vcdp->fullBit(c+425,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_lo));
	vcdp->fullBit(c+426,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_inc_hi));
	vcdp->fullBit(c+427,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_up));
	vcdp->fullBus(c+428,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data),32);
	vcdp->fullBit(c+429,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc));
	vcdp->fullBit(c+430,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc));
	vcdp->fullBit(c+431,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq));
	vcdp->fullBit(c+432,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret));
	vcdp->fullBus(c+433,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl),16);
	vcdp->fullBus(c+434,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr_new),16);
	vcdp->fullBus(c+435,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr_new),16);
	vcdp->fullBus(c+436,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_new),16);
	vcdp->fullBus(c+437,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr_clr),16);
	vcdp->fullBit(c+438,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_m));
	vcdp->fullBit(c+439,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_m));
	vcdp->fullBit(c+440,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__cisv_found));
	vcdp->fullBus(c+441,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk8__DOT__unnamedblk9__DOT__i),32);
	vcdp->fullBus(c+442,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk10__DOT__i),32);
	vcdp->fullBit(c+443,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect_cmb));
	vcdp->fullBus(c+444,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol_cmb),2);
	vcdp->fullBus(c+445,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2_cmb),2);
	vcdp->fullBit(c+446,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_cmb));
	vcdp->fullBus(c+447,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data_cmb),32);
	vcdp->fullBus(c+448,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_mcontrol_cmb),2);
	vcdp->fullBus(c+449,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_hit_cmb),2);
	vcdp->fullBit(c+450,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount_cmb));
	vcdp->fullBit(c+451,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__clk_en_icount_cmb));
	vcdp->fullBit(c+452,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_decrement_cmb));
	vcdp->fullBit(c+453,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_cmb));
	vcdp->fullBus(c+454,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus(c+455,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i),32);
	vcdp->fullBus(c+456,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i),32);
	vcdp->fullBit(c+457,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next));
	vcdp->fullBit(c+458,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next));
	vcdp->fullBit(c+459,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep));
	vcdp->fullBit(c+460,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except));
	vcdp->fullBit(c+461,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak));
	vcdp->fullBit(c+462,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
	vcdp->fullBus(c+463,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state_next),2);
	vcdp->fullBus(c+464,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next),3);
	vcdp->fullBit(c+465,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
	vcdp->fullBit(c+466,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel));
	vcdp->fullBit(c+467,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr));
	vcdp->fullBus(c+468,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				      >> 0x1cU))),4);
	vcdp->fullBus(c+469,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
					>> 0x10U))),12);
	vcdp->fullBit(c+470,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 0xfU))));
	vcdp->fullBus(c+471,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 0xcU))),3);
	vcdp->fullBit(c+472,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 0xbU))));
	vcdp->fullBus(c+473,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 9U))),2);
	vcdp->fullBus(c+474,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 6U))),3);
	vcdp->fullBus(c+475,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 3U))),3);
	vcdp->fullBit(c+476,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
				    >> 2U))));
	vcdp->fullBus(c+477,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data)),2);
	vcdp->fullBus(c+478,((0xfU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				      >> 0x1cU))),4);
	vcdp->fullBus(c+479,((0xfffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
					>> 0x10U))),12);
	vcdp->fullBit(c+480,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 0xfU))));
	vcdp->fullBus(c+481,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 0xcU))),3);
	vcdp->fullBit(c+482,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 0xbU))));
	vcdp->fullBus(c+483,((3U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 9U))),2);
	vcdp->fullBus(c+484,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 6U))),3);
	vcdp->fullBus(c+485,((7U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 3U))),3);
	vcdp->fullBit(c+486,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
				    >> 2U))));
	vcdp->fullBus(c+487,((3U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out)),2);
	vcdp->fullBit(c+488,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel));
	vcdp->fullBit(c+489,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))));
	vcdp->fullBus(c+490,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_cmb),32);
	vcdp->fullBus(c+491,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_cmb),32);
	vcdp->fullBit(c+492,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd));
	vcdp->fullBit(c+493,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr));
	vcdp->fullBus(c+494,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata),32);
	vcdp->fullBus(c+495,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen),4);
	vcdp->fullBus(c+496,((0x3fffU & (((0x480000U 
					   == (0xffff0000U 
					       & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))
					   ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr
					   : 0U) >> 2U))),14);
	vcdp->fullBus(c+497,((0x3fffU & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_addr 
					 >> 2U))),14);
	vcdp->fullQuad(c+498,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new),64);
	vcdp->fullQuad(c+500,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new),64);
	vcdp->fullBit(c+502,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up));
	vcdp->fullBit(c+503,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up));
	vcdp->fullBit(c+504,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up));
	vcdp->fullBit(c+505,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up));
	vcdp->fullBit(c+506,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up));
	vcdp->fullBit(c+507,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up));
	vcdp->fullBit(c+508,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid));
	vcdp->fullBit(c+509,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag));
	vcdp->fullBit(c+510,((0x480000U == (0xffff0000U 
					    & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))));
	vcdp->fullBus(c+511,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel),2);
	vcdp->fullBit(c+512,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd));
	vcdp->fullBit(c+513,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_empty));
	vcdp->fullBit(c+514,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd));
	vcdp->fullBit(c+515,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
				    >> 3U))));
	vcdp->fullBus(c+516,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U])),3);
	vcdp->fullBus(c+517,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U]),32);
	vcdp->fullBus(c+518,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U]),32);
	vcdp->fullBit(c+519,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
				    >> 3U))));
	vcdp->fullBus(c+520,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
	vcdp->fullBus(c+521,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
	vcdp->fullBus(c+522,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U]),32);
	vcdp->fullBit(c+523,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_empty));
	vcdp->fullBus(c+524,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard),4);
	vcdp->fullBus(c+525,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be),4);
	vcdp->fullBus(c+526,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard),4);
	vcdp->fullBit(c+527,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
	vcdp->fullBit(c+528,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy))));
	vcdp->fullBus(c+529,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
			       ? 2U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
				        ? 1U : ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
						 ? 3U
						 : 
						((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
						  ? 4U
						  : 0U))))),3);
	vcdp->fullBus(c+530,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_next),4);
	vcdp->fullBit(c+531,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr));
	vcdp->fullBus(c+532,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata),32);
	vcdp->fullBus(c+533,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata),32);
	vcdp->fullBit(c+534,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_dmcontrol_cmb));
	vcdp->fullBus(c+535,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_cmb),8);
	vcdp->fullBit(c+536,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_cmb));
	vcdp->fullBit(c+537,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regacs_cmb));
	vcdp->fullBus(c+538,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regtype_cmb),4);
	vcdp->fullBus(c+539,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regfile_cmb),7);
	vcdp->fullBit(c+540,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regwr_cmb));
	vcdp->fullBus(c+541,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_cmb),12);
	vcdp->fullBus(c+542,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb),3);
	vcdp->fullBit(c+543,((2U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regsize_cmb))));
	vcdp->fullBit(c+544,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regvalid_cmb));
	vcdp->fullBit(c+545,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_cmb));
	vcdp->fullBit(c+546,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memvalid_cmb));
	vcdp->fullBit(c+547,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memwr_cmb));
	vcdp->fullBus(c+548,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb),3);
	vcdp->fullBit(c+549,((3U > (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_memsize_cmb))));
	vcdp->fullBus(c+550,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_cmb),32);
	vcdp->fullBit(c+551,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_abstractauto_execdata0_cmb));
	vcdp->fullBus(c+552,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_cmb),32);
	vcdp->fullBus(c+553,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_cmb),32);
	vcdp->fullBus(c+554,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_cmb),32);
	vcdp->fullBus(c+555,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_cmb),32);
	vcdp->fullBus(c+556,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_cmb),32);
	vcdp->fullBus(c+557,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_cmb),32);
	vcdp->fullBit(c+558,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_cmb));
	vcdp->fullBit(c+559,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en));
	vcdp->fullBit(c+560,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge));
	vcdp->fullBit(c+561,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_rst_n));
	vcdp->fullBit(c+562,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_qlfy));
	vcdp->fullBit(c+563,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__hdu_rst_n_qlfy));
	vcdp->fullBit(c+564,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__pwrup_rst_n_sync));
	vcdp->fullBit(c+565,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
				    >> 3U))));
	vcdp->fullBit(c+566,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy) 
				    >> 2U))));
	vcdp->fullBus(c+567,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status_qlfy))),2);
	vcdp->fullBus(c+568,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy),3);
	vcdp->fullBus(c+569,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr),32);
	vcdp->fullBit(c+570,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted));
	vcdp->fullBit(c+571,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_run_start));
	vcdp->fullBit(c+572,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_clr));
	vcdp->fullBit(c+573,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exception_cmb));
	vcdp->fullBit(c+574,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run));
	vcdp->fullBit(c+575,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_cmd_req));
	vcdp->fullBit(c+576,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_pbuf_start_fetch));
	vcdp->fullBit(c+577,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_rctl_wr));
	vcdp->fullBit(c+578,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
	vcdp->fullBit(c+579,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_resume_req));
	vcdp->fullBus(c+580,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_cmb),4);
	vcdp->fullBit(c+581,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_cmb));
	vcdp->fullBit(c+582,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_cmb));
	vcdp->fullBit(c+583,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_cmb));
	vcdp->fullBus(c+584,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_cmb),2);
	vcdp->fullBus(c+585,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmderr_cmb),3);
	vcdp->fullBus(c+586,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_req_cmb),3);
	vcdp->fullBit(c+587,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_cmb));
	vcdp->fullBit(c+588,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy));
	vcdp->fullBus(c+589,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_cmd_qlfy),2);
	vcdp->fullBus(c+590,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_addr_qlfy),3);
	vcdp->fullBus(c+591,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_cmd_qlfy),2);
	vcdp->fullBus(c+592,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_addr_qlfy),2);
	vcdp->fullBit(c+593,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__queue_barrier));
	vcdp->fullBit(c+594,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp));
	vcdp->fullBit(c+595,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp_qlfy));
	vcdp->fullBit(c+596,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode));
	vcdp->fullBit(c+597,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_rcode_qlfy));
	vcdp->fullBus(c+598,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next),2);
	vcdp->fullBit(c+599,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next));
	vcdp->fullBit(c+600,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_csr_update));
	vcdp->fullBus(c+601,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_cmb),3);
	vcdp->fullBit(c+602,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_cmb));
	vcdp->fullBit(c+603,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_out_reg));
	vcdp->fullBit(c+604,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_mux_en_reg));
	vcdp->fullBus(c+605,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg),5);
	vcdp->fullBus(c+606,(((0xfU == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg))
			       ? (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg)
			       : (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_reg))),5);
	vcdp->fullBus(c+607,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_reg),5);
	vcdp->fullBus(c+608,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg),32);
	vcdp->fullBus(c+609,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg),32);
	vcdp->fullBit(c+610,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
	vcdp->fullBit(c+611,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg)));
	vcdp->fullBit(c+612,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
	vcdp->fullBit(c+613,((1U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg)));
	vcdp->fullBit(c+614,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift));
	vcdp->fullBit(c+615,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff));
	vcdp->fullBit(c+616,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_status_ff));
	vcdp->fullBit(c+617,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_ff));
	vcdp->fullBit(c+618,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_reset_buf_cell__DOT__reset_n_status_ff));
	vcdp->fullArray(c+619,(vlTOPp->scr1_top_tb_ahb__DOT__test_file),256);
	vcdp->fullBit(c+627,(vlTOPp->scr1_top_tb_ahb__DOT__test_running));
	vcdp->fullBus(c+628,(vlTOPp->scr1_top_tb_ahb__DOT__tests_passed),32);
	vcdp->fullBus(c+629,(vlTOPp->scr1_top_tb_ahb__DOT__tests_total),32);
	vcdp->fullBus(c+630,(vlTOPp->scr1_top_tb_ahb__DOT__rst_cnt),2);
	vcdp->fullBit(c+631,(vlTOPp->scr1_top_tb_ahb__DOT__rst_init));
	vcdp->fullBit(c+632,(vlTOPp->scr1_top_tb_ahb__DOT__unnamedblk1__DOT__test_pass));
	vcdp->fullBus(c+633,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata),32);
	vcdp->fullBus(c+634,(((0x1fU >= ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
					 << 3U)) ? 
			      (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
			       >> ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
				   << 3U)) : 0U)),32);
	vcdp->fullBus(c+635,((((5U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			       | (8U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
			       ? vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff
			       : vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff)),32);
	vcdp->fullBus(c+636,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr),32);
	vcdp->fullBus(c+637,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__cnt_res_reg),5);
	vcdp->fullBit(c+638,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_c_reg));
	vcdp->fullBus(c+639,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_1_reg),32);
	vcdp->fullBus(c+640,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_2_reg),32);
	vcdp->fullBus(c+641,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__res32_3_reg),32);
	vcdp->fullBus(c+642,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2)),32);
	vcdp->fullBus(c+643,((IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tdata2 
				      >> 0x20U))),32);
	vcdp->fullBit(c+644,(((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
			      & (1U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
	vcdp->fullBus(c+645,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff),3);
	vcdp->fullBit(c+646,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractauto_execdata0_ff));
	vcdp->fullBus(c+647,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data0_ff),32);
	vcdp->fullBus(c+648,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__data1_ff),32);
	vcdp->fullBus(c+649,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_ff),32);
	vcdp->fullBus(c+650,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf0_ff),32);
	vcdp->fullBus(c+651,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf1_ff),32);
	vcdp->fullBus(c+652,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf2_ff),32);
	vcdp->fullBus(c+653,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf3_ff),32);
	vcdp->fullBus(c+654,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf4_ff),32);
	vcdp->fullBus(c+655,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__progbuf5_ff),32);
	vcdp->fullBus(c+656,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff),4);
	vcdp->fullBit(c+657,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff));
	vcdp->fullBus(c+658,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff),32);
	vcdp->fullBit(c+659,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff));
	vcdp->fullBit(c+660,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff));
	vcdp->fullBus(c+661,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff),2);
	vcdp->fullBus(c+662,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff),12);
	vcdp->fullBit(c+663,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exception_ff));
	vcdp->fullBit(c+664,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff));
	vcdp->fullBit(c+665,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff));
	vcdp->fullBus(c+666,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local),32);
	vcdp->fullBus(c+667,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg),2);
	vcdp->fullBus(c+668,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus(c+669,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r),32);
	vcdp->fullBit(c+670,((1U & (vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
				    >> 3U))));
	vcdp->fullBus(c+671,((7U & vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U])),3);
	vcdp->fullBus(c+672,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U]),32);
	vcdp->fullBus(c+673,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U]),32);
	vcdp->fullArray(c+674,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file),256);
	vcdp->fullBit(c+682,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init));
	vcdp->fullBit(c+683,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
				    >> 1U))));
	vcdp->fullBit(c+684,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
				    >> 1U))));
	vcdp->fullBit(c+685,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
				    >> 1U))));
	vcdp->fullBus(c+686,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->fullBus(c+687,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->fullBus(c+688,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff),2);
	vcdp->fullBus(c+689,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mem_err_ptr),32);
	vcdp->fullBit(c+690,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state));
	vcdp->fullBus(c+691,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr),32);
	vcdp->fullBus(c+692,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall),32);
	vcdp->fullBit(c+693,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd));
	vcdp->fullBus(c+694,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l),32);
	vcdp->fullBus(c+695,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall),32);
	vcdp->fullBit(c+696,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd));
	vcdp->fullBit(c+697,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state));
	vcdp->fullBus(c+698,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr),32);
	vcdp->fullBit(c+699,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr));
	vcdp->fullBus(c+700,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size),3);
	vcdp->fullBus(c+701,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be),4);
	vcdp->fullBus(c+702,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l),32);
	vcdp->fullBit(c+703,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg)) 
				    & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
				       >> 1U)))));
	vcdp->fullBit(c+704,((1U & (((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)) 
				     & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff))) 
				    & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
				       >> 1U)))));
	vcdp->fullBit(c+705,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update));
	vcdp->fullBit(c+706,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi));
	vcdp->fullBit(c+707,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
	vcdp->fullBit(c+708,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))));
	vcdp->fullBus(c+709,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
				      >> 4U))),4);
	vcdp->fullBus(c+710,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
				    >> 2U))),2);
	vcdp->fullBus(c+711,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg))),2);
	vcdp->fullBus(c+712,((0xfU & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
				      >> 4U))),4);
	vcdp->fullBus(c+713,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg) 
				    >> 2U))),2);
	vcdp->fullBus(c+714,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shadow_reg))),2);
	vcdp->fullBus(c+715,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg) 
				    >> 1U))),3);
	vcdp->fullBit(c+716,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__control_reg))));
	vcdp->fullBus(c+717,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
				    >> 2U))),2);
	vcdp->fullBit(c+718,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg) 
				    >> 1U))));
	vcdp->fullBit(c+719,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg))));
	vcdp->fullBus(c+720,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
				    >> 2U))),2);
	vcdp->fullBit(c+721,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r) 
				    >> 1U))));
	vcdp->fullBit(c+722,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_r))));
	vcdp->fullBit(c+723,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg_wr_r));
	vcdp->fullBit(c+724,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				    >> 3U))));
	vcdp->fullBit(c+725,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				    >> 2U))));
	vcdp->fullBit(c+726,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly) 
				    >> 1U))));
	vcdp->fullBit(c+727,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__status_reg_data_dly))));
	vcdp->fullBit(c+728,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				    >> 3U))));
	vcdp->fullBit(c+729,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				    >> 2U))));
	vcdp->fullBit(c+730,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg) 
				    >> 1U))));
	vcdp->fullBit(c+731,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sticky_sts_reg))));
	vcdp->fullBit(c+732,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
	vcdp->fullBus(c+733,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBit(c+734,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
				     >> 2U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
					       >> 1U)))));
	vcdp->fullBit(c+735,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
				     >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
					       >> 2U)))));
	vcdp->fullBus(c+736,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync),4);
	vcdp->fullBus(c+737,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync),4);
	vcdp->fullBus(c+738,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync),3);
	vcdp->fullBit(c+739,((((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__shift_reg) 
			       & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel)) 
			      | ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff) 
				 & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel)))));
	vcdp->fullBit(c+740,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture))));
	vcdp->fullBit(c+741,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
	vcdp->fullBit(c+742,((1U & ((~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__mode_reg)) 
				    | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff)))));
	vcdp->fullBit(c+743,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event));
	vcdp->fullBus(c+744,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr),3);
	vcdp->fullBus(c+745,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_reg),32);
	vcdp->fullBus(c+746,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__tselect_ff),2);
	vcdp->fullBus(c+747,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_dmode_ff),2);
	vcdp->fullBus(c+748,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_action_ff),2);
	vcdp->fullBus(c+749,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_hit_ff),2);
	vcdp->fullBus(c+750,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_m_ff),2);
	vcdp->fullBus(c+751,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_execution_ff),2);
	vcdp->fullBus(c+752,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_load_ff),2);
	vcdp->fullBus(c+753,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_store_ff),2);
	vcdp->fullBit(c+754,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_skip_ff));
	vcdp->fullBit(c+755,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_dmode_ff));
	vcdp->fullBit(c+756,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_action_ff));
	vcdp->fullBit(c+757,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_hit_ff));
	vcdp->fullBit(c+758,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_m_ff));
	vcdp->fullBus(c+759,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__icount_count_ff),14);
	vcdp->fullBus(c+760,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state),2);
	vcdp->fullBit(c+761,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans));
	vcdp->fullBit(c+762,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update));
	vcdp->fullBit(c+763,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus) 
				    >> 3U))));
	vcdp->fullBus(c+764,((7U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))),3);
	vcdp->fullBus(c+765,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt),6);
	vcdp->fullBit(c+766,((1U & (~ (IData)((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbgc_timeout_cnt)))))));
	vcdp->fullBus(c+767,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_state),2);
	vcdp->fullBit(c+768,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching));
	vcdp->fullBus(c+769,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause),3);
	vcdp->fullBit(c+770,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))));
	vcdp->fullBit(c+771,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel));
	vcdp->fullBus(c+772,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id),2);
	vcdp->fullBit(c+773,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))));
	vcdp->fullBit(c+774,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_req));
	vcdp->fullBus(c+775,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd),2);
	vcdp->fullBus(c+776,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dmi_rdata_ff),32);
	vcdp->fullQuad(c+777,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff),41);
	vcdp->fullBit(c+779,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff));
	vcdp->fullBit(c+780,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff));
	vcdp->fullBit(c+781,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff));
	vcdp->fullBit(c+782,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff));
	vcdp->fullBit(c+783,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff));
	vcdp->fullBit(c+784,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff));
	vcdp->fullBit(c+785,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff));
	vcdp->fullBit(c+786,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff));
	vcdp->fullBus(c+787,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff),3);
	vcdp->fullBit(c+788,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_status_ff));
	vcdp->fullBit(c+789,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
	vcdp->fullBit(c+790,((1U & (~ (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)))));
	vcdp->fullBus(c+791,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp),2);
	vcdp->fullBus(c+792,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp),2);
	vcdp->fullBus(c+793,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata),32);
	vcdp->fullBus(c+794,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp),2);
	vcdp->fullBit(c+795,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
	vcdp->fullQuad(c+796,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg),64);
	vcdp->fullBus(c+798,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__curr_pc),32);
	vcdp->fullBit(c+799,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__fsm));
	vcdp->fullBus(c+800,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_r),30);
	vcdp->fullBus(c+801,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending),3);
	vcdp->fullBus(c+802,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt),3);
	vcdp->fullBit(c+803,((0U != (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt))));
	vcdp->fullBus(c+804,((7U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending) 
				    - (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__discard_resp_cnt)))),3);
	vcdp->fullBit(c+805,((7U == (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__num_txns_pending))));
	vcdp->fullBit(c+806,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned));
	vcdp->fullBus(c+807,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr),3);
	vcdp->fullBus(c+808,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr),3);
	vcdp->fullBus(c+809,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0]),16);
	vcdp->fullBus(c+810,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1]),16);
	vcdp->fullBus(c+811,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2]),16);
	vcdp->fullBus(c+812,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3]),16);
	vcdp->fullBit(c+813,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0]));
	vcdp->fullBit(c+814,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1]));
	vcdp->fullBit(c+815,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2]));
	vcdp->fullBit(c+816,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3]));
	vcdp->fullBus(c+817,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
			     [(3U & ((IData)(1U) + (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]),16);
	vcdp->fullBit(c+818,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__rdata_curr));
	vcdp->fullBit(c+819,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access));
	vcdp->fullBit(c+820,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted));
	vcdp->fullBit(c+821,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start));
	vcdp->fullBus(c+822,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v),4);
	vcdp->fullBit(c+823,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_r));
	vcdp->fullBus(c+824,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__curr_state),2);
	vcdp->fullBit(c+825,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__fsm));
	vcdp->fullBus(c+826,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_r),4);
	vcdp->fullBus(c+827,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U]),32);
	vcdp->fullBus(c+828,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U]),32);
	vcdp->fullBus(c+829,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U]),32);
	vcdp->fullBus(c+830,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U]),32);
	vcdp->fullBus(c+831,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U]),32);
	vcdp->fullBus(c+832,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U]),32);
	vcdp->fullBus(c+833,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U]),32);
	vcdp->fullBus(c+834,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U]),32);
	vcdp->fullBus(c+835,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U]),32);
	vcdp->fullBus(c+836,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U]),32);
	vcdp->fullBus(c+837,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU]),32);
	vcdp->fullBus(c+838,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU]),32);
	vcdp->fullBus(c+839,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU]),32);
	vcdp->fullBus(c+840,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU]),32);
	vcdp->fullBus(c+841,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU]),32);
	vcdp->fullBus(c+842,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU]),32);
	vcdp->fullBus(c+843,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U]),32);
	vcdp->fullBus(c+844,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U]),32);
	vcdp->fullBus(c+845,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U]),32);
	vcdp->fullBus(c+846,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U]),32);
	vcdp->fullBus(c+847,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U]),32);
	vcdp->fullBus(c+848,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]),32);
	vcdp->fullBus(c+849,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U]),32);
	vcdp->fullBus(c+850,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U]),32);
	vcdp->fullBus(c+851,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U]),32);
	vcdp->fullBus(c+852,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U]),32);
	vcdp->fullBus(c+853,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU]),32);
	vcdp->fullBus(c+854,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU]),32);
	vcdp->fullBus(c+855,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU]),32);
	vcdp->fullBus(c+856,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU]),32);
	vcdp->fullBus(c+857,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU]),32);
	vcdp->fullBit(c+858,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie));
	vcdp->fullBit(c+859,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie));
	vcdp->fullBit(c+860,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie));
	vcdp->fullBit(c+861,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie));
	vcdp->fullBit(c+862,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie));
	vcdp->fullBus(c+863,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch),32);
	vcdp->fullBus(c+864,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc),31);
	vcdp->fullBit(c+865,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i));
	vcdp->fullBus(c+866,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec),4);
	vcdp->fullBus(c+867,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval),32);
	vcdp->fullBus(c+868,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base),26);
	vcdp->fullBit(c+869,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode));
	vcdp->fullQuad(c+870,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_hi),56);
	vcdp->fullBus(c+872,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_instret_lo),8);
	vcdp->fullQuad(c+873,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_hi),56);
	vcdp->fullBus(c+875,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_cycle_lo),8);
	vcdp->fullBit(c+876,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy));
	vcdp->fullBit(c+877,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir));
	vcdp->fullBus(c+878,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_i),16);
	vcdp->fullBus(c+879,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_det),16);
	vcdp->fullBus(c+880,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__invr),16);
	vcdp->fullBus(c+881,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__imr),16);
	vcdp->fullBus(c+882,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr),16);
	vcdp->fullBus(c+883,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier),16);
	vcdp->fullBus(c+884,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipr) 
			      & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ier))),16);
	vcdp->fullBus(c+885,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cisv_m),5);
	vcdp->fullBus(c+886,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_m),4);
	vcdp->fullBus(c+887,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_m),16);
	vcdp->fullBus(c+888,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync0),16);
	vcdp->fullBus(c+889,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__unnamedblk13__DOT__i),32);
	vcdp->fullBus(c+890,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt),32);
	vcdp->fullBit(c+891,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r));
	vcdp->fullBus(c+892,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0U]),32);
	vcdp->fullBus(c+893,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[1U]),32);
	vcdp->fullBus(c+894,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[2U]),32);
	vcdp->fullBus(c+895,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[3U]),32);
	vcdp->fullBus(c+896,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[4U]),32);
	vcdp->fullBus(c+897,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[5U]),32);
	vcdp->fullBus(c+898,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[6U]),32);
	vcdp->fullBus(c+899,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[7U]),32);
	vcdp->fullBus(c+900,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[8U]),32);
	vcdp->fullBus(c+901,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[9U]),32);
	vcdp->fullBus(c+902,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xaU]),32);
	vcdp->fullBus(c+903,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xbU]),32);
	vcdp->fullBus(c+904,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xcU]),32);
	vcdp->fullBus(c+905,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xdU]),32);
	vcdp->fullBus(c+906,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xeU]),32);
	vcdp->fullBus(c+907,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0xfU]),32);
	vcdp->fullBus(c+908,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x10U]),32);
	vcdp->fullBus(c+909,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x11U]),32);
	vcdp->fullBus(c+910,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x12U]),32);
	vcdp->fullBus(c+911,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x13U]),32);
	vcdp->fullBus(c+912,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x14U]),32);
	vcdp->fullBus(c+913,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x15U]),32);
	vcdp->fullBus(c+914,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x16U]),32);
	vcdp->fullBus(c+915,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x17U]),32);
	vcdp->fullBus(c+916,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x18U]),32);
	vcdp->fullBus(c+917,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x19U]),32);
	vcdp->fullBus(c+918,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1aU]),32);
	vcdp->fullBus(c+919,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1bU]),32);
	vcdp->fullBus(c+920,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1cU]),32);
	vcdp->fullBus(c+921,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1dU]),32);
	vcdp->fullBus(c+922,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_log[0x1eU]),32);
	vcdp->fullBit(c+923,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up));
	vcdp->fullBus(c+924,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr),5);
	vcdp->fullBus(c+925,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler),32);
	vcdp->fullBus(c+926,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt2),32);
	vcdp->fullBus(c+927,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_csr_fhandler),32);
	vcdp->fullBus(c+928,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[6U]),32);
	vcdp->fullBus(c+929,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[5U]),32);
	vcdp->fullBus(c+930,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[4U]),32);
	vcdp->fullBus(c+931,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[3U]),32);
	vcdp->fullBus(c+932,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[2U]),32);
	vcdp->fullBus(c+933,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[1U]),32);
	vcdp->fullBus(c+934,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace2[0U]),32);
	vcdp->fullQuad(c+935,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg),64);
	vcdp->fullBit(c+937,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
	vcdp->fullBus(c+938,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div),10);
	vcdp->fullBus(c+939,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt),10);
	vcdp->fullBit(c+940,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm));
	vcdp->fullBit(c+941,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r));
	vcdp->fullBit(c+942,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm));
	vcdp->fullBus(c+943,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r),2);
	vcdp->fullBit(c+944,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm));
	vcdp->fullBit(c+945,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
	vcdp->fullBit(c+946,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
	vcdp->fullBus(c+947,((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
	vcdp->fullBus(c+948,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__curr_pc_log),32);
	vcdp->fullBit(c+949,((1U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x25U)))));
	vcdp->fullBus(c+950,((7U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x22U)))),3);
	vcdp->fullBus(c+951,((3U & (IData)((vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
					    >> 0x20U)))),2);
	vcdp->fullBit(c+952,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
	vcdp->fullBit(c+953,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture));
	vcdp->fullBit(c+954,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift));
	vcdp->fullBit(c+955,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update));
	vcdp->fullBit(c+956,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
	vcdp->fullBit(c+957,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture));
	vcdp->fullBit(c+958,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift));
	vcdp->fullBit(c+959,(((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
			      | (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
	vcdp->fullBus(c+960,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_reg),16);
	vcdp->fullBit(c+961,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 4U))));
	vcdp->fullBit(c+962,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 2U))));
	vcdp->fullBit(c+963,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 5U))));
	vcdp->fullBit(c+964,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))));
	vcdp->fullBit(c+965,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 1U))));
	vcdp->fullBit(c+966,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 5U))));
	vcdp->fullBit(c+967,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 4U))));
	vcdp->fullBit(c+968,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 3U))));
	vcdp->fullBit(c+969,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 2U))));
	vcdp->fullBit(c+970,((1U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
				    >> 1U))));
	vcdp->fullBit(c+971,((1U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))));
	vcdp->fullBit(c+972,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm));
	vcdp->fullBit(c+973,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie));
	vcdp->fullBit(c+974,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step));
	vcdp->fullBit(c+975,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm));
	vcdp->fullBit(c+976,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int));
	vcdp->fullBus(c+977,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync),3);
	vcdp->fullBus(c+978,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync),3);
	vcdp->fullBit(c+979,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff));
	vcdp->fullBit(c+980,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
	vcdp->fullBit(c+981,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_buf_cell__DOT__reset_n_ff));
	vcdp->fullBus(c+982,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync),4);
	vcdp->fullBit(c+983,((1U & (((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
				     >> 3U) ^ ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
					       >> 2U)))));
	vcdp->fullBit(c+984,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc));
	vcdp->fullBus(c+985,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_state_reg),4);
	vcdp->fullBit(c+986,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_ff));
	vcdp->fullBit(c+987,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
	vcdp->fullBit(c+988,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
	vcdp->fullBit(c+989,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
	vcdp->fullBit(c+990,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
	vcdp->fullBit(c+991,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_lucky_ff));
	vcdp->fullBit(c+992,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_qualifier_ff));
	vcdp->fullBit(c+993,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_victim_ff));
	vcdp->fullBit(c+994,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_buf_qlfy_cell__DOT__reset_n_front_ff));
	vcdp->fullBit(c+995,(vlTOPp->clk));
	vcdp->fullBus(c+996,(0x100000U),32);
	vcdp->fullBus(c+997,(0xf8U),32);
	vcdp->fullBit(c+998,(0U));
	vcdp->fullBus(c+999,(0U),3);
	vcdp->fullBus(c+1000,(2U),3);
	vcdp->fullBit(c+1001,(1U));
	vcdp->fullBus(c+1002,(0xdeb11001U),32);
	vcdp->fullBit(c+1003,(0U));
	vcdp->fullBit(c+1004,(1U));
	vcdp->fullBit(c+1005,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__rst_n_sync));
	vcdp->fullBit(c+1006,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__cpu_rst_n_sync));
	vcdp->fullBus(c+1007,(2U),32);
	vcdp->fullBus(c+1008,(4U),32);
	vcdp->fullBus(c+1009,(2U),32);
	vcdp->fullBus(c+1010,(4U),32);
	vcdp->fullBus(c+1011,(3U),32);
	vcdp->fullBus(c+1012,(0U),5);
	vcdp->fullBus(c+1013,(1U),5);
	vcdp->fullBus(c+1014,(2U),5);
	vcdp->fullBus(c+1015,(0xfffffffeU),32);
	vcdp->fullBus(c+1016,(1U),32);
	vcdp->fullBus(c+1017,(0x1fU),32);
	vcdp->fullBus(c+1018,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_vect),16);
	vcdp->fullBus(c+1019,(0x10U),32);
	vcdp->fullBus(c+1020,(3U),32);
	vcdp->fullBus(c+1021,((3U & (IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_match_ff))),2);
	vcdp->fullBus(c+1022,((3U & ((IData)(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__mcontrol_match_ff) 
				     >> 2U))),2);
	vcdp->fullBit(c+1023,(1U));
	vcdp->fullBus(c+1024,(0x40U),32);
	vcdp->fullBus(c+1025,(6U),32);
	vcdp->fullBit(c+1026,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_rcode));
	vcdp->fullBit(c+1027,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_wr));
	vcdp->fullBus(c+1028,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_diff),32);
	vcdp->fullBus(c+1029,(1U),32);
	vcdp->fullBit(c+1030,(0U));
	vcdp->fullBus(c+1031,(0x20U),32);
	vcdp->fullBus(c+1032,(0U),32);
	vcdp->fullBus(c+1033,(0x19040301U),32);
	vcdp->fullBus(c+1034,(0x1fU),5);
	vcdp->fullBus(c+1035,(0x12U),5);
	vcdp->fullBus(c+1036,(0x11U),5);
	vcdp->fullBus(c+1037,(0x10U),5);
	vcdp->fullBus(c+1038,(0xfU),5);
	vcdp->fullBus(c+1039,(0xeU),5);
	vcdp->fullBus(c+1040,(0xcU),5);
	vcdp->fullBus(c+1041,(0xbU),5);
	vcdp->fullBus(c+1042,(0xaU),5);
	vcdp->fullBus(c+1043,(9U),5);
	vcdp->fullBus(c+1044,(4U),5);
	vcdp->fullBus(c+1045,(3U),5);
	vcdp->fullBit(c+1046,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dtmcs_dmihardreset_cmb));
	vcdp->fullBit(c+1047,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dtmcs_dmireset_cmb));
	vcdp->fullBus(c+1048,(1U),32);
	vcdp->fullBus(c+1049,(2U),32);
	vcdp->fullBus(c+1050,(0x21U),32);
	vcdp->fullBus(c+1051,(0x22U),32);
	vcdp->fullBus(c+1052,(0x28U),32);
	vcdp->fullBus(c+1053,(2U),2);
	vcdp->fullBit(c+1054,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_running));
	vcdp->fullBus(c+1055,(1U),4);
	vcdp->fullBus(c+1056,(0x7b2U),12);
	vcdp->fullBus(c+1057,(6U),5);
	vcdp->fullBus(c+1058,(2U),4);
	vcdp->fullBit(c+1059,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_ro_en));
	vcdp->fullBus(c+1060,(0U),4);
	vcdp->fullBus(c+1061,(0U),7);
	vcdp->fullBus(c+1062,(1U),7);
	vcdp->fullBus(c+1063,(0x100073U),32);
	vcdp->fullBus(c+1064,(3U),2);
	vcdp->fullBus(c+1065,(4U),3);
	vcdp->fullBit(c+1066,(vlTOPp->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_cmb));
	vcdp->fullBus(c+1067,(0x10000U),32);
	vcdp->fullBus(c+1068,(0x20U),32);
	vcdp->fullBus(c+1069,(0x4000U),32);
	vcdp->fullBus(c+1070,(5U),32);
	vcdp->fullBus(c+1071,(8U),5);
	vcdp->fullBus(c+1072,(0x14U),5);
	vcdp->fullBus(c+1073,(0U),32);
	vcdp->fullBus(c+1074,(0xaU),32);
	vcdp->fullBus(c+1075,(0xffff0000U),32);
	vcdp->fullBus(c+1076,(0x480000U),32);
	vcdp->fullBus(c+1077,(0xffffffe0U),32);
	vcdp->fullBus(c+1078,(0x490000U),32);
	vcdp->fullBus(c+1079,(0x14U),32);
	vcdp->fullBus(c+1080,(0xf0000000U),32);
	vcdp->fullBus(c+1081,(0xf0000100U),32);
	vcdp->fullBus(c+1082,(0xfffff100U),32);
	vcdp->fullBus(c+1083,(0xf0000200U),32);
	vcdp->fullBit(c+1084,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_en));
	vcdp->fullBit(c+1085,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen));
	vcdp->fullBus(c+1086,(0xffffffffU),32);
	vcdp->fullBit(c+1087,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_nc));
	vcdp->fullBit(c+1088,(vlTOPp->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_nc));
	vcdp->fullBus(c+1089,(0x1aU),32);
	vcdp->fullBus(c+1090,(0x200U),32);
	vcdp->fullBus(c+1091,(0x1c0U),32);
	vcdp->fullBus(c+1092,(0xffff0000U),32);
	vcdp->fullBus(c+1093,(0x480000U),32);
	vcdp->fullBus(c+1094,(0xffffffe0U),32);
	vcdp->fullBus(c+1095,(0x490000U),32);
	vcdp->fullBus(c+1096,(0xcU),32);
	vcdp->fullBus(c+1097,(7U),26);
	vcdp->fullBus(c+1098,(3U),4);
	vcdp->fullBus(c+1099,(7U),4);
	vcdp->fullBus(c+1100,(0xbU),4);
	vcdp->fullBus(c+1101,(0U),4);
	vcdp->fullBus(c+1102,(0x17U),32);
	vcdp->fullBus(c+1103,(5U),32);
	vcdp->fullBus(c+1104,(9U),32);
	vcdp->fullBus(c+1105,(7U),32);
	vcdp->fullBus(c+1106,(0x10U),32);
	vcdp->fullBus(c+1107,(1U),3);
	vcdp->fullBus(c+1108,(3U),3);
	vcdp->fullBus(c+1109,(5U),3);
	vcdp->fullBus(c+1110,(6U),3);
	vcdp->fullBus(c+1111,(7U),3);
	vcdp->fullBus(c+1112,(0U),32);
	vcdp->fullBus(c+1113,(8U),32);
	vcdp->fullBus(c+1114,(0xcU),32);
	vcdp->fullBus(c+1115,(0xf11U),12);
	vcdp->fullBus(c+1116,(0xf12U),12);
	vcdp->fullBus(c+1117,(0xf13U),12);
	vcdp->fullBus(c+1118,(0xf14U),12);
	vcdp->fullBus(c+1119,(0x300U),12);
	vcdp->fullBus(c+1120,(0x301U),12);
	vcdp->fullBus(c+1121,(0x304U),12);
	vcdp->fullBus(c+1122,(0x305U),12);
	vcdp->fullBus(c+1123,(0x340U),12);
	vcdp->fullBus(c+1124,(0x341U),12);
	vcdp->fullBus(c+1125,(0x342U),12);
	vcdp->fullBus(c+1126,(0x343U),12);
	vcdp->fullBus(c+1127,(0x344U),12);
	vcdp->fullBus(c+1128,(0xb00U),12);
	vcdp->fullBus(c+1129,(0xb02U),12);
	vcdp->fullBus(c+1130,(0xb80U),12);
	vcdp->fullBus(c+1131,(0xb82U),12);
	vcdp->fullBus(c+1132,(0xc01U),12);
	vcdp->fullBus(c+1133,(0xc00U),12);
	vcdp->fullBus(c+1134,(0xc02U),12);
	vcdp->fullBus(c+1135,(0xc81U),12);
	vcdp->fullBus(c+1136,(0xc80U),12);
	vcdp->fullBus(c+1137,(0xc82U),12);
	vcdp->fullBus(c+1138,(0x7b0U),12);
	vcdp->fullBus(c+1139,(4U),12);
	vcdp->fullBus(c+1140,(0x7e0U),12);
	vcdp->fullBus(c+1141,(0x7a0U),12);
	vcdp->fullBus(c+1142,(8U),12);
	vcdp->fullBus(c+1143,(0xbf0U),12);
	vcdp->fullBus(c+1144,(0xbf1U),12);
	vcdp->fullBus(c+1145,(0xbf2U),12);
	vcdp->fullBus(c+1146,(0xbf3U),12);
	vcdp->fullBus(c+1147,(0xbf4U),12);
	vcdp->fullBus(c+1148,(0xbf5U),12);
	vcdp->fullBus(c+1149,(0xbf6U),12);
	vcdp->fullBus(c+1150,(0xbf7U),12);
	vcdp->fullBit(c+1151,(0U));
	vcdp->fullBus(c+1152,(1U),2);
	vcdp->fullBus(c+1153,(0x40001104U),32);
	vcdp->fullBus(c+1154,(0U),32);
	vcdp->fullBus(c+1155,(8U),32);
	vcdp->fullBus(c+1156,(3U),2);
	vcdp->fullBus(c+1157,(7U),32);
	vcdp->fullBus(c+1158,(0xbU),32);
	vcdp->fullBus(c+1159,(0x60U),7);
	vcdp->fullBus(c+1160,(0x64U),7);
	vcdp->fullBus(c+1161,(0x58U),7);
	vcdp->fullBus(c+1162,(0x5cU),7);
	vcdp->fullBus(c+1163,(0x19U),7);
	vcdp->fullBus(c+1164,(4U),4);
	vcdp->fullBus(c+1165,(8U),32);
	vcdp->fullBus(c+1166,(0U),2);
	vcdp->fullBus(c+1167,(1U),2);
	vcdp->fullBus(c+1168,(0x7b1U),12);
	vcdp->fullBus(c+1169,(0x7b2U),12);
	vcdp->fullBus(c+1170,(0x7b3U),12);
	vcdp->fullBus(c+1171,(0U),3);
	vcdp->fullBus(c+1172,(1U),3);
	vcdp->fullBus(c+1173,(2U),3);
	vcdp->fullBus(c+1174,(4U),3);
	vcdp->fullBus(c+1175,(0x7a1U),12);
	vcdp->fullBus(c+1176,(0x7a2U),12);
	vcdp->fullBus(c+1177,(0x7a4U),12);
	vcdp->fullBus(c+1178,(0x1fU),32);
	vcdp->fullBus(c+1179,(0x1cU),32);
	vcdp->fullBus(c+1180,(0x1bU),32);
	vcdp->fullBus(c+1181,(0x15U),32);
	vcdp->fullBus(c+1182,(0x14U),32);
	vcdp->fullBus(c+1183,(0x13U),32);
	vcdp->fullBus(c+1184,(0x12U),32);
	vcdp->fullBus(c+1185,(0x11U),32);
	vcdp->fullBus(c+1186,(2U),4);
	vcdp->fullBus(c+1187,(0U),6);
	vcdp->fullBus(c+1188,(0x19U),32);
	vcdp->fullBus(c+1189,(0x18U),32);
	vcdp->fullBus(c+1190,(0x17U),32);
	vcdp->fullBus(c+1191,(9U),32);
	vcdp->fullBus(c+1192,(0U),2);
	vcdp->fullBus(c+1193,(7U),6);
	vcdp->fullBus(c+1194,(0x20U),6);
	vcdp->fullBus(c+1195,(0x29U),6);
	vcdp->fullBus(c+1196,(4U),7);
	vcdp->fullBus(c+1197,(5U),7);
	vcdp->fullBus(c+1198,(0x10U),7);
	vcdp->fullBus(c+1199,(0x11U),7);
	vcdp->fullBus(c+1200,(0x12U),7);
	vcdp->fullBus(c+1201,(0x16U),7);
	vcdp->fullBus(c+1202,(0x17U),7);
	vcdp->fullBus(c+1203,(0x18U),7);
	vcdp->fullBus(c+1204,(0x20U),7);
	vcdp->fullBus(c+1205,(0x21U),7);
	vcdp->fullBus(c+1206,(0x22U),7);
	vcdp->fullBus(c+1207,(0x23U),7);
	vcdp->fullBus(c+1208,(0x24U),7);
	vcdp->fullBus(c+1209,(0x25U),7);
	vcdp->fullBus(c+1210,(0x40U),7);
	vcdp->fullBus(c+1211,(0x1eU),5);
	vcdp->fullBus(c+1212,(0x1dU),5);
	vcdp->fullBus(c+1213,(0x1cU),5);
	vcdp->fullBus(c+1214,(0x1bU),5);
	vcdp->fullBus(c+1215,(0x1aU),5);
	vcdp->fullBus(c+1216,(0x19U),5);
	vcdp->fullBus(c+1217,(5U),5);
	vcdp->fullBus(c+1218,(0x17U),5);
	vcdp->fullBus(c+1219,(0x16U),5);
	vcdp->fullBus(c+1220,(0x15U),5);
	vcdp->fullBus(c+1221,(0x13U),5);
	vcdp->fullBus(c+1222,(0xdU),5);
	vcdp->fullBus(c+1223,(7U),5);
	vcdp->fullBus(c+1224,(0x18U),5);
    }
}
