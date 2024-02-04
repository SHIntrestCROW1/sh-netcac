from . import figp as freq
freq = freq.NewFreq(0, 0, 0, 0)
freq2 = freq.setFreq(180, 120, bimpy.FreqWidth(182) freq.FreqSleep(9))
freq.ReadFreq(freq2)

