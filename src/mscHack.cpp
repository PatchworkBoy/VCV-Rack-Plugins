#include "mscHack.hpp"

Plugin *plugin;

void init(rack::Plugin *p) 
{
	plugin = p;
	plugin->slug = "mscHack";
	plugin->name = "mscHack";
	plugin->homepageUrl = "";

    createModel<Seq_3x16x16_Widget>(plugin, "Seq_3ch_16step", "SEQ 3 x 16 Programmable");
    //createModel<WaveShaper1_Widget>(plugin, "WaveShaper1", "Single Channel Wave Shaper");
}
