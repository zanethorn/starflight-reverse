// ====== OVERLAY 'ORBIT-OV' ======

#include"interface.h"

// store offset = 0xdb70
// overlay size   = 0x19f0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xdb86  codep:0x2214 parp:0xdb86 size:0x0002 C-string:'UNK_0xdb86'
// 1704:      UNK_0xdb8a  codep:0x2214 parp:0xdb8a size:0x0002 C-string:'UNK_0xdb8a'
// 1705:      UNK_0xdb8e  codep:0x2214 parp:0xdb8e size:0x0002 C-string:'UNK_0xdb8e'
// 1706:      UNK_0xdb92  codep:0x1d29 parp:0xdb92 size:0x000c C-string:'UNK_0xdb92'
// 1707:      UNK_0xdba0  codep:0x1d29 parp:0xdba0 size:0x0002 C-string:'UNK_0xdba0'
// 1708:      UNK_0xdba4  codep:0x1d29 parp:0xdba4 size:0x0002 C-string:'UNK_0xdba4'
// 1709:      UNK_0xdba8  codep:0x1d29 parp:0xdba8 size:0x0002 C-string:'UNK_0xdba8'
// 1710:      UNK_0xdbac  codep:0x1d29 parp:0xdbac size:0x0002 C-string:'UNK_0xdbac'
// 1711:      UNK_0xdbb0  codep:0x1d29 parp:0xdbb0 size:0x0002 C-string:'UNK_0xdbb0'
// 1712:      UNK_0xdbb4  codep:0x1d29 parp:0xdbb4 size:0x0002 C-string:'UNK_0xdbb4'
// 1713:      UNK_0xdbb8  codep:0x1d29 parp:0xdbb8 size:0x0002 C-string:'UNK_0xdbb8'
// 1714:      UNK_0xdbbc  codep:0x1d29 parp:0xdbbc size:0x0002 C-string:'UNK_0xdbbc'
// 1715:      UNK_0xdbc0  codep:0x1d29 parp:0xdbc0 size:0x0002 C-string:'UNK_0xdbc0'
// 1716:      UNK_0xdbc4  codep:0x1d29 parp:0xdbc4 size:0x0002 C-string:'UNK_0xdbc4'
// 1717:      UNK_0xdbc8  codep:0x1d29 parp:0xdbc8 size:0x0002 C-string:'UNK_0xdbc8'
// 1718:      UNK_0xdbcc  codep:0x1d29 parp:0xdbcc size:0x0002 C-string:'UNK_0xdbcc'
// 1719:      UNK_0xdbd0  codep:0x1d29 parp:0xdbd0 size:0x0002 C-string:'UNK_0xdbd0'
// 1720:      UNK_0xdbd4  codep:0x1d29 parp:0xdbd4 size:0x0002 C-string:'UNK_0xdbd4'
// 1721:      UNK_0xdbd8  codep:0x1d29 parp:0xdbd8 size:0x0002 C-string:'UNK_0xdbd8'
// 1722:      UNK_0xdbdc  codep:0x1d29 parp:0xdbdc size:0x0002 C-string:'UNK_0xdbdc'
// 1723:      UNK_0xdbe0  codep:0x1d29 parp:0xdbe0 size:0x0002 C-string:'UNK_0xdbe0'
// 1724:      UNK_0xdbe4  codep:0x1d29 parp:0xdbe4 size:0x0002 C-string:'UNK_0xdbe4'
// 1725:      UNK_0xdbe8  codep:0x1d29 parp:0xdbe8 size:0x0002 C-string:'UNK_0xdbe8'
// 1726:      UNK_0xdbec  codep:0x1d29 parp:0xdbec size:0x0002 C-string:'UNK_0xdbec'
// 1727:      UNK_0xdbf0  codep:0x1d29 parp:0xdbf0 size:0x0002 C-string:'UNK_0xdbf0'
// 1728:      UNK_0xdbf4  codep:0x1d29 parp:0xdbf4 size:0x0002 C-string:'UNK_0xdbf4'
// 1729:      UNK_0xdbf8  codep:0x1d29 parp:0xdbf8 size:0x0002 C-string:'UNK_0xdbf8'
// 1730:      UNK_0xdbfc  codep:0x1d29 parp:0xdbfc size:0x0002 C-string:'UNK_0xdbfc'
// 1731:      UNK_0xdc00  codep:0x1d29 parp:0xdc00 size:0x0002 C-string:'UNK_0xdc00'
// 1732:      UNK_0xdc04  codep:0x1d29 parp:0xdc04 size:0x0002 C-string:'UNK_0xdc04'
// 1733:      UNK_0xdc08  codep:0x1d29 parp:0xdc08 size:0x0006 C-string:'UNK_0xdc08'
// 1734:      UNK_0xdc10  codep:0x1d29 parp:0xdc10 size:0x0002 C-string:'UNK_0xdc10'
// 1735:      UNK_0xdc14  codep:0x1d29 parp:0xdc14 size:0x0002 C-string:'UNK_0xdc14'
// 1736:      UNK_0xdc18  codep:0x1d29 parp:0xdc18 size:0x0002 C-string:'UNK_0xdc18'
// 1737:      UNK_0xdc1c  codep:0x1d29 parp:0xdc1c size:0x0016 C-string:'UNK_0xdc1c'
// 1738:      UNK_0xdc34  codep:0x1d29 parp:0xdc34 size:0x0002 C-string:'UNK_0xdc34'
// 1739:      UNK_0xdc38  codep:0x1d29 parp:0xdc38 size:0x0020 C-string:'UNK_0xdc38'
// 1740:      UNK_0xdc5a  codep:0x1d29 parp:0xdc5a size:0x0008 C-string:'UNK_0xdc5a'
// 1741:      UNK_0xdc64  codep:0x1d29 parp:0xdc64 size:0x0020 C-string:'UNK_0xdc64'
// 1742:      UNK_0xdc86  codep:0x1d29 parp:0xdc86 size:0x0008 C-string:'UNK_0xdc86'
// 1743:      UNK_0xdc90  codep:0x1d29 parp:0xdc90 size:0x0030 C-string:'UNK_0xdc90'
// 1744:      UNK_0xdcc2  codep:0x1d29 parp:0xdcc2 size:0x0018 C-string:'UNK_0xdcc2'
// 1745:      UNK_0xdcdc  codep:0x73ea parp:0xdcdc size:0x004e C-string:'UNK_0xdcdc'
// 1746:      UNK_0xdd2c  codep:0xdd2c parp:0xdd2c size:0x0098 C-string:'UNK_0xdd2c'
// 1747:      UNK_0xddc6  codep:0x224c parp:0xddc6 size:0x0026 C-string:'UNK_0xddc6'
// 1748:      UNK_0xddee  codep:0x224c parp:0xddee size:0x004c C-string:'UNK_0xddee'
// 1749:      UNK_0xde3c  codep:0x224c parp:0xde3c size:0x004e C-string:'UNK_0xde3c'
// 1750:      UNK_0xde8c  codep:0x224c parp:0xde8c size:0x0022 C-string:'UNK_0xde8c'
// 1751:      UNK_0xdeb0  codep:0x224c parp:0xdeb0 size:0x0022 C-string:'UNK_0xdeb0'
// 1752:      UNK_0xded4  codep:0x224c parp:0xded4 size:0x0022 C-string:'UNK_0xded4'
// 1753:         SETQUAD  codep:0xdf02 parp:0xdf02 size:0x0009 C-string:'SETQUAD'
// 1754:             C*/  codep:0xdf13 parp:0xdf13 size:0x000e C-string:'C_star__slash_'
// 1755:      UNK_0xdf23  codep:0x224c parp:0xdf23 size:0x002c C-string:'UNK_0xdf23'
// 1756:      UNK_0xdf51  codep:0x224c parp:0xdf51 size:0x0022 C-string:'UNK_0xdf51'
// 1757:      UNK_0xdf75  codep:0x224c parp:0xdf75 size:0x001e C-string:'UNK_0xdf75'
// 1758:      UNK_0xdf95  codep:0x224c parp:0xdf95 size:0x0016 C-string:'UNK_0xdf95'
// 1759:      UNK_0xdfad  codep:0x224c parp:0xdfad size:0x0016 C-string:'UNK_0xdfad'
// 1760:      UNK_0xdfc5  codep:0x224c parp:0xdfc5 size:0x0016 C-string:'UNK_0xdfc5'
// 1761:      UNK_0xdfdd  codep:0x224c parp:0xdfdd size:0x0012 C-string:'UNK_0xdfdd'
// 1762:      UNK_0xdff1  codep:0x224c parp:0xdff1 size:0x0028 C-string:'UNK_0xdff1'
// 1763:      UNK_0xe01b  codep:0x224c parp:0xe01b size:0x0016 C-string:'UNK_0xe01b'
// 1764:      UNK_0xe033  codep:0x224c parp:0xe033 size:0x002e C-string:'UNK_0xe033'
// 1765:      UNK_0xe063  codep:0x224c parp:0xe063 size:0x002c C-string:'UNK_0xe063'
// 1766:      UNK_0xe091  codep:0x224c parp:0xe091 size:0x0018 C-string:'UNK_0xe091'
// 1767:      UNK_0xe0ab  codep:0x224c parp:0xe0ab size:0x0030 C-string:'UNK_0xe0ab'
// 1768:      UNK_0xe0dd  codep:0x224c parp:0xe0dd size:0x001a C-string:'UNK_0xe0dd'
// 1769:      UNK_0xe0f9  codep:0x224c parp:0xe0f9 size:0x0012 C-string:'UNK_0xe0f9'
// 1770:      UNK_0xe10d  codep:0x224c parp:0xe10d size:0x001a C-string:'UNK_0xe10d'
// 1771:      UNK_0xe129  codep:0x224c parp:0xe129 size:0x0010 C-string:'UNK_0xe129'
// 1772:      UNK_0xe13b  codep:0x224c parp:0xe13b size:0x002e C-string:'UNK_0xe13b'
// 1773:      UNK_0xe16b  codep:0xe16b parp:0xe16b size:0x0049 C-string:'UNK_0xe16b'
// 1774:      UNK_0xe1b6  codep:0xe1b6 parp:0xe1b6 size:0x0070 C-string:'UNK_0xe1b6'
// 1775:      UNK_0xe228  codep:0xe228 parp:0xe228 size:0x0050 C-string:'UNK_0xe228'
// 1776:      UNK_0xe27a  codep:0x224c parp:0xe27a size:0x006a C-string:'UNK_0xe27a'
// 1777:      UNK_0xe2e6  codep:0x224c parp:0xe2e6 size:0x0070 C-string:'UNK_0xe2e6'
// 1778:      UNK_0xe358  codep:0x224c parp:0xe358 size:0x002e C-string:'UNK_0xe358'
// 1779:      UNK_0xe388  codep:0x224c parp:0xe388 size:0x001e C-string:'UNK_0xe388'
// 1780:      UNK_0xe3a8  codep:0x224c parp:0xe3a8 size:0x0016 C-string:'UNK_0xe3a8'
// 1781:      UNK_0xe3c0  codep:0x224c parp:0xe3c0 size:0x004e C-string:'UNK_0xe3c0'
// 1782:      UNK_0xe410  codep:0x224c parp:0xe410 size:0x0050 C-string:'UNK_0xe410'
// 1783:      UNK_0xe462  codep:0x224c parp:0xe462 size:0x0028 C-string:'UNK_0xe462'
// 1784:      UNK_0xe48c  codep:0xe48c parp:0xe48c size:0x001c C-string:'UNK_0xe48c'
// 1785:      UNK_0xe4aa  codep:0xe4aa parp:0xe4aa size:0x0008 C-string:'UNK_0xe4aa'
// 1786:      UNK_0xe4b4  codep:0x224c parp:0xe4b4 size:0x009a C-string:'UNK_0xe4b4'
// 1787:      UNK_0xe550  codep:0x224c parp:0xe550 size:0x0012 C-string:'UNK_0xe550'
// 1788:      UNK_0xe564  codep:0x224c parp:0xe564 size:0x0036 C-string:'UNK_0xe564'
// 1789:      UNK_0xe59c  codep:0x224c parp:0xe59c size:0x005c C-string:'UNK_0xe59c'
// 1790:      UNK_0xe5fa  codep:0x1d29 parp:0xe5fa size:0x0002 C-string:'UNK_0xe5fa'
// 1791:      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x0054 C-string:'UNK_0xe5fe'
// 1792:      UNK_0xe654  codep:0x224c parp:0xe654 size:0x001a C-string:'UNK_0xe654'
// 1793:      UNK_0xe670  codep:0x224c parp:0xe670 size:0x001c C-string:'UNK_0xe670'
// 1794:      UNK_0xe68e  codep:0x224c parp:0xe68e size:0x004c C-string:'UNK_0xe68e'
// 1795:      UNK_0xe6dc  codep:0x224c parp:0xe6dc size:0x001a C-string:'UNK_0xe6dc'
// 1796:        SHOWSITE  codep:0x224c parp:0xe703 size:0x0016 C-string:'SHOWSITE'
// 1797:       >VIEWSITE  codep:0x224c parp:0xe727 size:0x0040 C-string:'_gt_VIEWSITE'
// 1798:      UNK_0xe769  codep:0x224c parp:0xe769 size:0x003c C-string:'UNK_0xe769'
// 1799:      UNK_0xe7a7  codep:0x224c parp:0xe7a7 size:0x0064 C-string:'UNK_0xe7a7'
// 1800:      UNK_0xe80d  codep:0x224c parp:0xe80d size:0x0056 C-string:'UNK_0xe80d'
// 1801:      UNK_0xe865  codep:0x224c parp:0xe865 size:0x003a C-string:'UNK_0xe865'
// 1802:      UNK_0xe8a1  codep:0x224c parp:0xe8a1 size:0x0042 C-string:'UNK_0xe8a1'
// 1803:      UNK_0xe8e5  codep:0x224c parp:0xe8e5 size:0x0060 C-string:'UNK_0xe8e5'
// 1804:      UNK_0xe947  codep:0x224c parp:0xe947 size:0x0030 C-string:'UNK_0xe947'
// 1805:      UNK_0xe979  codep:0x224c parp:0xe979 size:0x0024 C-string:'UNK_0xe979'
// 1806:      UNK_0xe99f  codep:0x224c parp:0xe99f size:0x0012 C-string:'UNK_0xe99f'
// 1807:      UNK_0xe9b3  codep:0x224c parp:0xe9b3 size:0x0038 C-string:'UNK_0xe9b3'
// 1808:      UNK_0xe9ed  codep:0x224c parp:0xe9ed size:0x003c C-string:'UNK_0xe9ed'
// 1809:      UNK_0xea2b  codep:0x224c parp:0xea2b size:0x002c C-string:'UNK_0xea2b'
// 1810:      UNK_0xea59  codep:0x224c parp:0xea59 size:0x002e C-string:'UNK_0xea59'
// 1811:      UNK_0xea89  codep:0x224c parp:0xea89 size:0x002c C-string:'UNK_0xea89'
// 1812:      UNK_0xeab7  codep:0x224c parp:0xeab7 size:0x0038 C-string:'UNK_0xeab7'
// 1813:      UNK_0xeaf1  codep:0x224c parp:0xeaf1 size:0x0052 C-string:'UNK_0xeaf1'
// 1814:      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x001a C-string:'UNK_0xeb45'
// 1815:      UNK_0xeb61  codep:0x224c parp:0xeb61 size:0x006e C-string:'UNK_0xeb61'
// 1816:      UNK_0xebd1  codep:0x224c parp:0xebd1 size:0x0088 C-string:'UNK_0xebd1'
// 1817:         SEEGRID  codep:0x224c parp:0xec65 size:0x0016 C-string:'SEEGRID'
// 1818:      UNK_0xec7d  codep:0x224c parp:0xec7d size:0x0018 C-string:'UNK_0xec7d'
// 1819:      UNK_0xec97  codep:0x224c parp:0xec97 size:0x003c C-string:'UNK_0xec97'
// 1820:      UNK_0xecd5  codep:0x224c parp:0xecd5 size:0x0040 C-string:'UNK_0xecd5'
// 1821:      UNK_0xed17  codep:0x224c parp:0xed17 size:0x0098 C-string:'UNK_0xed17'
// 1822:      UNK_0xedb1  codep:0x224c parp:0xedb1 size:0x001c C-string:'UNK_0xedb1'
// 1823:      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x002a C-string:'UNK_0xedcf'
// 1824:      UNK_0xedfb  codep:0x224c parp:0xedfb size:0x0068 C-string:'UNK_0xedfb'
// 1825:      UNK_0xee65  codep:0x224c parp:0xee65 size:0x0034 C-string:'UNK_0xee65'
// 1826:      UNK_0xee9b  codep:0x224c parp:0xee9b size:0x0034 C-string:'UNK_0xee9b'
// 1827:      UNK_0xeed1  codep:0x224c parp:0xeed1 size:0x0060 C-string:'UNK_0xeed1'
// 1828:      UNK_0xef33  codep:0x224c parp:0xef33 size:0x003a C-string:'UNK_0xef33'
// 1829:      UNK_0xef6f  codep:0x224c parp:0xef6f size:0x0026 C-string:'UNK_0xef6f'
// 1830:      UNK_0xef97  codep:0x224c parp:0xef97 size:0x0042 C-string:'UNK_0xef97'
// 1831:      UNK_0xefdb  codep:0x224c parp:0xefdb size:0x001e C-string:'UNK_0xefdb'
// 1832:      UNK_0xeffb  codep:0x224c parp:0xeffb size:0x0026 C-string:'UNK_0xeffb'
// 1833:      UNK_0xf023  codep:0x224c parp:0xf023 size:0x001e C-string:'UNK_0xf023'
// 1834:      UNK_0xf043  codep:0x224c parp:0xf043 size:0x0026 C-string:'UNK_0xf043'
// 1835:      UNK_0xf06b  codep:0x224c parp:0xf06b size:0x001a C-string:'UNK_0xf06b'
// 1836:      UNK_0xf087  codep:0x224c parp:0xf087 size:0x000e C-string:'UNK_0xf087'
// 1837:      UNK_0xf097  codep:0x224c parp:0xf097 size:0x000a C-string:'UNK_0xf097'
// 1838:      UNK_0xf0a3  codep:0x224c parp:0xf0a3 size:0x000a C-string:'UNK_0xf0a3'
// 1839:      UNK_0xf0af  codep:0x224c parp:0xf0af size:0x000a C-string:'UNK_0xf0af'
// 1840:      UNK_0xf0bb  codep:0x224c parp:0xf0bb size:0x000a C-string:'UNK_0xf0bb'
// 1841:      UNK_0xf0c7  codep:0x224c parp:0xf0c7 size:0x000a C-string:'UNK_0xf0c7'
// 1842:      UNK_0xf0d3  codep:0x224c parp:0xf0d3 size:0x00c8 C-string:'UNK_0xf0d3'
// 1843:      UNK_0xf19d  codep:0x224c parp:0xf19d size:0x000e C-string:'UNK_0xf19d'
// 1844:         DESCEND  codep:0x224c parp:0xf1b7 size:0x008d C-string:'DESCEND'
// 1845:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x006c C-string:'UNK_0xf246'
// 1846:      UNK_0xf2b4  codep:0x224c parp:0xf2b4 size:0x0046 C-string:'UNK_0xf2b4'
// 1847:      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0012 C-string:'UNK_0xf2fc'
// 1848:      UNK_0xf310  codep:0x1d29 parp:0xf310 size:0x0002 C-string:'UNK_0xf310'
// 1849:      UNK_0xf314  codep:0x224c parp:0xf314 size:0x0068 C-string:'UNK_0xf314'
// 1850:          ASCEND  codep:0x224c parp:0xf387 size:0x0008 C-string:'ASCEND'
// 1851:      UNK_0xf391  codep:0x224c parp:0xf391 size:0x000c C-string:'UNK_0xf391'
// 1852:      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x002a C-string:'UNK_0xf39f'
// 1853:      UNK_0xf3cb  codep:0x224c parp:0xf3cb size:0x0026 C-string:'UNK_0xf3cb'
// 1854:         SKYCASE  codep:0x4a4f parp:0xf3fd size:0x0014 C-string:'SKYCASE'
// 1855:      UNK_0xf413  codep:0x224c parp:0xf413 size:0x000c C-string:'UNK_0xf413'
// 1856:      INIT-ORBIT  codep:0x224c parp:0xf42e size:0x0058 C-string:'INIT_minus_ORBIT'
// 1857:          ROTATE  codep:0x224c parp:0xf491 size:0x00cf C-string:'ROTATE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xdb92[12] = {0x08, 0x19, 0x29, 0x38, 0x47, 0x54, 0x5f, 0x6a, 0x72, 0x78, 0x7d, 0x7f}; // UNK_0xdb92
unsigned char UNK_0xdba0[2] = {0x0e, 0x00}; // UNK_0xdba0
unsigned char UNK_0xdba4[2] = {0x19, 0x00}; // UNK_0xdba4
unsigned char UNK_0xdba8[2] = {0x07, 0x00}; // UNK_0xdba8
unsigned char UNK_0xdbac[2] = {0x67, 0x01}; // UNK_0xdbac
unsigned char UNK_0xdbb0[2] = {0x18, 0x00}; // UNK_0xdbb0
unsigned char UNK_0xdbb4[2] = {0xf9, 0xff}; // UNK_0xdbb4
unsigned char UNK_0xdbb8[2] = {0x05, 0x00}; // UNK_0xdbb8
unsigned char UNK_0xdbbc[2] = {0xf8, 0xff}; // UNK_0xdbbc
unsigned char UNK_0xdbc0[2] = {0x00, 0x00}; // UNK_0xdbc0
unsigned char UNK_0xdbc4[2] = {0x14, 0x00}; // UNK_0xdbc4
unsigned char UNK_0xdbc8[2] = {0x00, 0x00}; // UNK_0xdbc8
unsigned char UNK_0xdbcc[2] = {0x32, 0x00}; // UNK_0xdbcc
unsigned char UNK_0xdbd0[2] = {0x01, 0x00}; // UNK_0xdbd0
unsigned char UNK_0xdbd4[2] = {0x00, 0x00}; // UNK_0xdbd4
unsigned char UNK_0xdbd8[2] = {0x01, 0x00}; // UNK_0xdbd8
unsigned char UNK_0xdbdc[2] = {0x00, 0x00}; // UNK_0xdbdc
unsigned char UNK_0xdbe0[2] = {0x00, 0x00}; // UNK_0xdbe0
unsigned char UNK_0xdbe4[2] = {0x31, 0x00}; // UNK_0xdbe4
unsigned char UNK_0xdbe8[2] = {0x01, 0x00}; // UNK_0xdbe8
unsigned char UNK_0xdbec[2] = {0x7f, 0x00}; // UNK_0xdbec
unsigned char UNK_0xdbf0[2] = {0xa1, 0xff}; // UNK_0xdbf0
unsigned char UNK_0xdbf4[2] = {0xac, 0xff}; // UNK_0xdbf4
unsigned char UNK_0xdbf8[2] = {0xce, 0x18}; // UNK_0xdbf8
unsigned char UNK_0xdbfc[2] = {0x19, 0x00}; // UNK_0xdbfc
unsigned char UNK_0xdc00[2] = {0x7d, 0x00}; // UNK_0xdc00
unsigned char UNK_0xdc04[2] = {0x00, 0x00}; // UNK_0xdc04
unsigned char UNK_0xdc08[6] = {0x7f, 0x00, 0x29, 0x1d, 0xce, 0x18}; // UNK_0xdc08
unsigned char UNK_0xdc10[2] = {0x14, 0x00}; // UNK_0xdc10
unsigned char UNK_0xdc14[2] = {0x23, 0x00}; // UNK_0xdc14
unsigned char UNK_0xdc18[2] = {0x0a, 0x00}; // UNK_0xdc18
unsigned char UNK_0xdc1c[22] = {0x1f, 0x00, 0x29, 0x1d, 0xde, 0xf6, 0x29, 0x1d, 0x02, 0x00, 0x29, 0x1d, 0x02, 0x00, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xdc1c
unsigned char UNK_0xdc34[2] = {0x2e, 0x00}; // UNK_0xdc34
unsigned char UNK_0xdc38[32] = {0x32, 0x00, 0x25, 0x00, 0x32, 0x00, 0x26, 0x00, 0x32, 0x00, 0x25, 0x00, 0x32, 0x00, 0x25, 0x00, 0x67, 0x00, 0x3d, 0x00, 0x02, 0x00, 0x01, 0x00, 0x31, 0x37, 0x3c, 0x83, 0xe9, 0x2c, 0xdc, 0xce}; // UNK_0xdc38
unsigned char UNK_0xdc5a[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e}; // UNK_0xdc5a
unsigned char UNK_0xdc64[32] = {0x00, 0x00, 0x33, 0x00, 0x06, 0x00, 0x39, 0x00, 0x13, 0x00, 0x43, 0x00, 0x03, 0x00, 0x34, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x12, 0x00, 0x12, 0x00, 0x00, 0x00, 0xcd, 0x46, 0x52, 0x41}; // UNK_0xdc64
unsigned char UNK_0xdc86[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; // UNK_0xdc86
unsigned char UNK_0xdc90[48] = {0xca, 0x06, 0x02, 0xde, 0x7f, 0x00, 0xd9, 0x00, 0x2a, 0xfe, 0x00, 0x06, 0x53, 0x02, 0x6b, 0xfc, 0xc0, 0x03, 0x8c, 0x0f, 0xf5, 0xdd, 0x7f, 0x00, 0x2f, 0xff, 0xb2, 0xef, 0x00, 0x01, 0x2d, 0x46, 0x52, 0x41, 0x4d, 0xc5, 0xa0, 0x3c, 0xda, 0xea, 0x57, 0xdc, 0xc6, 0x40, 0x46, 0x52, 0x41, 0x4d}; // UNK_0xdc90
unsigned char UNK_0xdcc2[24] = {0xac, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x7d, 0x00, 0x10, 0x00, 0x00, 0x00, 0x5d, 0x00, 0xe7, 0x00, 0x52, 0x00, 0xce, 0x18}; // UNK_0xdcc2
unsigned char UNK_0xe5fa[2] = {0x00, 0x00}; // UNK_0xe5fa
unsigned char UNK_0xf310[2] = {0x0a, 0x00}; // UNK_0xf310

const unsigned short int cc_UNK_0xdb86 = 0x007f; // UNK_0xdb86
const unsigned short int cc_UNK_0xdb8a = 0x0032; // UNK_0xdb8a
const unsigned short int cc_UNK_0xdb8e = 0x0042; // UNK_0xdb8e


// 0xdb82: db 0x93 0x01 '  '

// ================================================
// 0xdb84: WORD 'UNK_0xdb86' codep=0x2214 parp=0xdb86
// ================================================
// 0xdb86: db 0x7f 0x00 ' '

// ================================================
// 0xdb88: WORD 'UNK_0xdb8a' codep=0x2214 parp=0xdb8a
// ================================================
// 0xdb8a: db 0x32 0x00 '2 '

// ================================================
// 0xdb8c: WORD 'UNK_0xdb8e' codep=0x2214 parp=0xdb8e
// ================================================
// 0xdb8e: db 0x42 0x00 'B '

// ================================================
// 0xdb90: WORD 'UNK_0xdb92' codep=0x1d29 parp=0xdb92
// ================================================
// 0xdb92: db 0x08 0x19 0x29 0x38 0x47 0x54 0x5f 0x6a 0x72 0x78 0x7d 0x7f '  )8GT_jrx}'

// ================================================
// 0xdb9e: WORD 'UNK_0xdba0' codep=0x1d29 parp=0xdba0
// ================================================
// 0xdba0: db 0x0e 0x00 '  '

// ================================================
// 0xdba2: WORD 'UNK_0xdba4' codep=0x1d29 parp=0xdba4
// ================================================
// 0xdba4: db 0x19 0x00 '  '

// ================================================
// 0xdba6: WORD 'UNK_0xdba8' codep=0x1d29 parp=0xdba8
// ================================================
// 0xdba8: db 0x07 0x00 '  '

// ================================================
// 0xdbaa: WORD 'UNK_0xdbac' codep=0x1d29 parp=0xdbac
// ================================================
// 0xdbac: db 0x67 0x01 'g '

// ================================================
// 0xdbae: WORD 'UNK_0xdbb0' codep=0x1d29 parp=0xdbb0
// ================================================
// 0xdbb0: db 0x18 0x00 '  '

// ================================================
// 0xdbb2: WORD 'UNK_0xdbb4' codep=0x1d29 parp=0xdbb4
// ================================================
// 0xdbb4: db 0xf9 0xff '  '

// ================================================
// 0xdbb6: WORD 'UNK_0xdbb8' codep=0x1d29 parp=0xdbb8
// ================================================
// 0xdbb8: db 0x05 0x00 '  '

// ================================================
// 0xdbba: WORD 'UNK_0xdbbc' codep=0x1d29 parp=0xdbbc
// ================================================
// 0xdbbc: db 0xf8 0xff '  '

// ================================================
// 0xdbbe: WORD 'UNK_0xdbc0' codep=0x1d29 parp=0xdbc0
// ================================================
// 0xdbc0: db 0x00 0x00 '  '

// ================================================
// 0xdbc2: WORD 'UNK_0xdbc4' codep=0x1d29 parp=0xdbc4
// ================================================
// 0xdbc4: db 0x14 0x00 '  '

// ================================================
// 0xdbc6: WORD 'UNK_0xdbc8' codep=0x1d29 parp=0xdbc8
// ================================================
// 0xdbc8: db 0x00 0x00 '  '

// ================================================
// 0xdbca: WORD 'UNK_0xdbcc' codep=0x1d29 parp=0xdbcc
// ================================================
// 0xdbcc: db 0x32 0x00 '2 '

// ================================================
// 0xdbce: WORD 'UNK_0xdbd0' codep=0x1d29 parp=0xdbd0
// ================================================
// 0xdbd0: db 0x01 0x00 '  '

// ================================================
// 0xdbd2: WORD 'UNK_0xdbd4' codep=0x1d29 parp=0xdbd4
// ================================================
// 0xdbd4: db 0x00 0x00 '  '

// ================================================
// 0xdbd6: WORD 'UNK_0xdbd8' codep=0x1d29 parp=0xdbd8
// ================================================
// 0xdbd8: db 0x01 0x00 '  '

// ================================================
// 0xdbda: WORD 'UNK_0xdbdc' codep=0x1d29 parp=0xdbdc
// ================================================
// 0xdbdc: db 0x00 0x00 '  '

// ================================================
// 0xdbde: WORD 'UNK_0xdbe0' codep=0x1d29 parp=0xdbe0
// ================================================
// 0xdbe0: db 0x00 0x00 '  '

// ================================================
// 0xdbe2: WORD 'UNK_0xdbe4' codep=0x1d29 parp=0xdbe4
// ================================================
// 0xdbe4: db 0x31 0x00 '1 '

// ================================================
// 0xdbe6: WORD 'UNK_0xdbe8' codep=0x1d29 parp=0xdbe8
// ================================================
// 0xdbe8: db 0x01 0x00 '  '

// ================================================
// 0xdbea: WORD 'UNK_0xdbec' codep=0x1d29 parp=0xdbec
// ================================================
// 0xdbec: db 0x7f 0x00 ' '

// ================================================
// 0xdbee: WORD 'UNK_0xdbf0' codep=0x1d29 parp=0xdbf0
// ================================================
// 0xdbf0: db 0xa1 0xff '  '

// ================================================
// 0xdbf2: WORD 'UNK_0xdbf4' codep=0x1d29 parp=0xdbf4
// ================================================
// 0xdbf4: db 0xac 0xff '  '

// ================================================
// 0xdbf6: WORD 'UNK_0xdbf8' codep=0x1d29 parp=0xdbf8
// ================================================
// 0xdbf8: db 0xce 0x18 '  '

// ================================================
// 0xdbfa: WORD 'UNK_0xdbfc' codep=0x1d29 parp=0xdbfc
// ================================================
// 0xdbfc: db 0x19 0x00 '  '

// ================================================
// 0xdbfe: WORD 'UNK_0xdc00' codep=0x1d29 parp=0xdc00
// ================================================
// 0xdc00: db 0x7d 0x00 '} '

// ================================================
// 0xdc02: WORD 'UNK_0xdc04' codep=0x1d29 parp=0xdc04
// ================================================
// 0xdc04: db 0x00 0x00 '  '

// ================================================
// 0xdc06: WORD 'UNK_0xdc08' codep=0x1d29 parp=0xdc08
// ================================================
// 0xdc08: db 0x7f 0x00 0x29 0x1d 0xce 0x18 ' )   '

// ================================================
// 0xdc0e: WORD 'UNK_0xdc10' codep=0x1d29 parp=0xdc10
// ================================================
// 0xdc10: db 0x14 0x00 '  '

// ================================================
// 0xdc12: WORD 'UNK_0xdc14' codep=0x1d29 parp=0xdc14
// ================================================
// 0xdc14: db 0x23 0x00 '# '

// ================================================
// 0xdc16: WORD 'UNK_0xdc18' codep=0x1d29 parp=0xdc18
// ================================================
// 0xdc18: db 0x0a 0x00 '  '

// ================================================
// 0xdc1a: WORD 'UNK_0xdc1c' codep=0x1d29 parp=0xdc1c
// ================================================
// 0xdc1c: db 0x1f 0x00 0x29 0x1d 0xde 0xf6 0x29 0x1d 0x02 0x00 0x29 0x1d 0x02 0x00 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 '  )   )   )   ) : ) : '

// ================================================
// 0xdc32: WORD 'UNK_0xdc34' codep=0x1d29 parp=0xdc34
// ================================================
// 0xdc34: db 0x2e 0x00 '. '

// ================================================
// 0xdc36: WORD 'UNK_0xdc38' codep=0x1d29 parp=0xdc38
// ================================================
// 0xdc38: db 0x32 0x00 0x25 0x00 0x32 0x00 0x26 0x00 0x32 0x00 0x25 0x00 0x32 0x00 0x25 0x00 0x67 0x00 0x3d 0x00 0x02 0x00 0x01 0x00 0x31 0x37 0x3c 0x83 0xe9 0x2c 0xdc 0xce '2 % 2 & 2 % 2 % g =     17<  ,  '

// ================================================
// 0xdc58: WORD 'UNK_0xdc5a' codep=0x1d29 parp=0xdc5a
// ================================================
// 0xdc5a: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x4e '       N'

// ================================================
// 0xdc62: WORD 'UNK_0xdc64' codep=0x1d29 parp=0xdc64
// ================================================
// 0xdc64: db 0x00 0x00 0x33 0x00 0x06 0x00 0x39 0x00 0x13 0x00 0x43 0x00 0x03 0x00 0x34 0x00 0x00 0x00 0x31 0x00 0x00 0x00 0x12 0x00 0x12 0x00 0x00 0x00 0xcd 0x46 0x52 0x41 '  3   9   C   4   1          FRA'

// ================================================
// 0xdc84: WORD 'UNK_0xdc86' codep=0x1d29 parp=0xdc86
// ================================================
// 0xdc86: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '        '

// ================================================
// 0xdc8e: WORD 'UNK_0xdc90' codep=0x1d29 parp=0xdc90
// ================================================
// 0xdc90: db 0xca 0x06 0x02 0xde 0x7f 0x00 0xd9 0x00 0x2a 0xfe 0x00 0x06 0x53 0x02 0x6b 0xfc 0xc0 0x03 0x8c 0x0f 0xf5 0xdd 0x7f 0x00 0x2f 0xff 0xb2 0xef 0x00 0x01 0x2d 0x46 0x52 0x41 0x4d 0xc5 0xa0 0x3c 0xda 0xea 0x57 0xdc 0xc6 0x40 0x46 0x52 0x41 0x4d '       *   S k        /     -FRAM  <  W  @FRAM'

// ================================================
// 0xdcc0: WORD 'UNK_0xdcc2' codep=0x1d29 parp=0xdcc2
// ================================================
// 0xdcc2: db 0xac 0x00 0x00 0x00 0x5f 0x00 0x00 0x00 0x12 0x00 0x7d 0x00 0x10 0x00 0x00 0x00 0x5d 0x00 0xe7 0x00 0x52 0x00 0xce 0x18 '    _     }     ]   R   '

// ================================================
// 0xdcda: WORD 'UNK_0xdcdc' codep=0x73ea parp=0xdcdc
// ================================================
// 0xdcdc: db 0x20 0x02 0x02 0x16 0x8f 0x65 0x29 0x1d 0x8b 0xc1 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc2 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0xc3 0xe4 0xdc 0xe9 0xdc 0xf8 0xdc 0x02 0xdd 0x11 0xdd 0x29 0x1d '     e)    )     @    @   )     @   )     @    @   )              ) '
// 0xdd20: shl    bx,1
// 0xdd22: add    bx,DD14
// 0xdd26: mov    ax,[bx]
// 0xdd28: jmp    ax

// ================================================
// 0xdd2a: WORD 'UNK_0xdd2c' codep=0xdd2c parp=0xdd2c
// ================================================
// 0xdd2c: pop    word ptr [DC24]
// 0xdd30: pop    word ptr [DC28]
// 0xdd34: mov    bx,[DC20]
// 0xdd38: add    bx,0E
// 0xdd3b: mov    cx,[bx]
// 0xdd3d: sub    bx,04
// 0xdd40: mov    dx,[bx]
// 0xdd42: mov    bx,[DC28]
// 0xdd46: call   DD20
// 0xdd49: push   ax
// 0xdd4a: mov    bx,[DC20]
// 0xdd4e: add    bx,02
// 0xdd51: mov    cx,[bx]
// 0xdd53: add    bx,04
// 0xdd56: mov    dx,[bx]
// 0xdd58: mov    bx,[DC28]
// 0xdd5c: call   DD20
// 0xdd5f: mov    dx,ax
// 0xdd61: pop    cx
// 0xdd62: mov    bx,[DC24]
// 0xdd66: call   DD20
// 0xdd69: push   ax
// 0xdd6a: mov    bx,[DC20]
// 0xdd6e: mov    dx,[bx]
// 0xdd70: add    bx,0C
// 0xdd73: mov    cx,[bx]
// 0xdd75: mov    bx,[DC24]
// 0xdd79: call   DD20
// 0xdd7c: push   ax
// 0xdd7d: mov    bx,[DC20]
// 0xdd81: add    bx,04
// 0xdd84: mov    dx,[bx]
// 0xdd86: add    bx,04
// 0xdd89: mov    cx,[bx]
// 0xdd8b: mov    bx,[DC24]
// 0xdd8f: call   DD20
// 0xdd92: mov    dx,ax
// 0xdd94: pop    cx
// 0xdd95: mov    bx,[DC28]
// 0xdd99: call   DD20
// 0xdd9c: push   ax
// 0xdd9d: lodsw
// 0xdd9e: mov    bx,ax
// 0xdda0: jmp    word ptr [bx]
// 0xdda2: dec    sp
// 0xdda3: and    bh,[bx+0E]
// 0xdda6: jb     DDB7
// 0xdda8: repnz  
// 0xdda9: push   cs
// 0xddaa: mov    ax,2615
// 0xddad: dec    bp
// 0xddae: and    [bx],cl
// 0xddb0: mov    ax,5015
// 0xddb3: push   cs
// 0xddb4: db     6E
// 0xddb5: push   cs
// 0xddb6: dec    si
// 0xddb7: dec    bp
// 0xddb8: nop    
// 0xddb9: dec    bp
// 0xddba: rcl    byte ptr [di],1
// 0xddbc: idiv   bh
// 0xddbe: rcl    byte ptr [di],1
// 0xddc0: in     al,dx
// 0xddc1: call   word ptr [bx+si+4C16]

// ================================================
// 0xddc4: WORD 'UNK_0xddc6' codep=0x224c parp=0xddc6
// ================================================

void UNK_0xddc6() // UNK_0xddc6
{
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  _n_COLZ(); // #COLZ
  Push(Pop()-1); // 1-

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ACELLAD(); // ACELLAD
  A_ex_(); // A!
  Push(cc__minus_1); // -1
  int step = Pop();
  j += step;
  } while(((step>=0) && (j<jmax)) || ((step<0) && (j>jmax))); // (+LOOP) 0xfff4

  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

}


// ================================================
// 0xddec: WORD 'UNK_0xddee' codep=0x224c parp=0xddee
// ================================================

void UNK_0xddee() // UNK_0xddee
{
  Push(pp_SPHEREW); // SPHEREW
  OFF(); // OFF
  Push(0x6b31);
  SETLARR(); // SETLARR
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(0x004e);
  _minus_(); // -
  Push(0); // 0
  Push(i); // J
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(0x004e);
  _minus_(); // -
  Push(i); // J
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(1); // 1
  UNK_0xddc6(); // UNK_0xddc6
  j++;
  } while(j<jmax); // (LOOP) 0xffd2

  i++;
  } while(i<imax); // (LOOP) 0xffc8

}


// ================================================
// 0xde3a: WORD 'UNK_0xde3c' codep=0x224c parp=0xde3c
// ================================================

void UNK_0xde3c() // UNK_0xde3c
{
  Push(pp_SPHEREW); // SPHEREW
  OFF(); // OFF
  Push(0x6b31);
  SETLARR(); // SETLARR
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(0x000e);
  _minus_(); // -
  Push(0); // 0
  Push(i); // J
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(0x000e);
  _minus_(); // -
  Push(i); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(1); // 1
  UNK_0xddc6(); // UNK_0xddc6
  j++;
  } while(j<jmax); // (LOOP) 0xffd0

  i++;
  } while(i<imax); // (LOOP) 0xffc6

}


// ================================================
// 0xde8a: WORD 'UNK_0xde8c' codep=0x224c parp=0xde8c
// ================================================

void UNK_0xde8c() // UNK_0xde8c
{
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x004b);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6b43);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0164);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdeae: WORD 'UNK_0xdeb0' codep=0x224c parp=0xdeb0
// ================================================

void UNK_0xdeb0() // UNK_0xdeb0
{
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x004c);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6afa);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0120);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xded2: WORD 'UNK_0xded4' codep=0x224c parp=0xded4
// ================================================

void UNK_0xded4() // UNK_0xded4
{
  XHBUF_minus_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x004d);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6ae8);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0192);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdef6: WORD 'SETQUAD' codep=0xdf02 parp=0xdf02
// ================================================
// 0xdf02: mov    [DC20],sp
// 0xdf06: lodsw
// 0xdf07: mov    bx,ax
// 0xdf09: jmp    word ptr [bx]

// ================================================
// 0xdf0b: WORD 'C*/' codep=0xdf13 parp=0xdf13
// ================================================
// 0xdf13: pop    dx
// 0xdf14: pop    cx
// 0xdf15: pop    ax
// 0xdf16: imul   cl
// 0xdf18: idiv   dl
// 0xdf1a: cbw    
// 0xdf1b: push   ax
// 0xdf1c: lodsw
// 0xdf1d: mov    bx,ax
// 0xdf1f: jmp    word ptr [bx]

// ================================================
// 0xdf21: WORD 'UNK_0xdf23' codep=0x224c parp=0xdf23
// ================================================

void UNK_0xdf23() // UNK_0xdf23
{
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbd4); // UNK_0xdbd4
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdbe0); // UNK_0xdbe0
  _ex_(); // !
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbd8); // UNK_0xdbd8
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  _ex_(); // !
  Push(pp_UNK_0xdbd0); // UNK_0xdbd0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbdc); // UNK_0xdbdc
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  _ex_(); // !
}


// ================================================
// 0xdf4f: WORD 'UNK_0xdf51' codep=0x224c parp=0xdf51
// ================================================

void UNK_0xdf51() // UNK_0xdf51
{
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  M_star_(); // M*
  Push(pp_UNK_0xdbe0); // UNK_0xdbe0
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xdbec); // UNK_0xdbec
  _ex_(); // !
}


// ================================================
// 0xdf73: WORD 'UNK_0xdf75' codep=0x224c parp=0xdf75
// ================================================

void UNK_0xdf75() // UNK_0xdf75
{
  Push(pp_UNK_0xdbec); // UNK_0xdbec
  Push(Read16(Pop())); // @
  DUP(); // DUP
  M_star_(); // M*
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xdbf8); // UNK_0xdbf8
  _ex_(); // !
}


// ================================================
// 0xdf93: WORD 'UNK_0xdf95' codep=0x224c parp=0xdf95
// ================================================

void UNK_0xdf95() // UNK_0xdf95
{
  Push(pp_UNK_0xdbe0); // UNK_0xdbe0
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbec); // UNK_0xdbec
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  _ex_(); // !
}


// ================================================
// 0xdfab: WORD 'UNK_0xdfad' codep=0x224c parp=0xdfad
// ================================================

void UNK_0xdfad() // UNK_0xdfad
{
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbec); // UNK_0xdbec
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  _ex_(); // !
}


// ================================================
// 0xdfc3: WORD 'UNK_0xdfc5' codep=0x224c parp=0xdfc5
// ================================================

void UNK_0xdfc5() // UNK_0xdfc5
{
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbf8); // UNK_0xdbf8
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  _ex_(); // !
}


// ================================================
// 0xdfdb: WORD 'UNK_0xdfdd' codep=0x224c parp=0xdfdd
// ================================================

void UNK_0xdfdd() // UNK_0xdfdd
{
  Push(pp_UNK_0xdbec); // UNK_0xdbec
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(pp_UNK_0xdbf8); // UNK_0xdbf8
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  _ex_(); // !
}


// ================================================
// 0xdfef: WORD 'UNK_0xdff1' codep=0x224c parp=0xdff1
// ================================================

void UNK_0xdff1() // UNK_0xdff1
{
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  C_ex_(); // C!
}


// ================================================
// 0xe019: WORD 'UNK_0xe01b' codep=0x224c parp=0xe01b
// ================================================

void UNK_0xe01b() // UNK_0xe01b
{
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(Pop()+2); // 2+
  C_ex_(); // C!
}


// ================================================
// 0xe031: WORD 'UNK_0xe033' codep=0x224c parp=0xe033
// ================================================

void UNK_0xe033() // UNK_0xe033
{
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe061: WORD 'UNK_0xe063' codep=0x224c parp=0xe063
// ================================================

void UNK_0xe063() // UNK_0xe063
{
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  _minus_(); // -
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe08f: WORD 'UNK_0xe091' codep=0x224c parp=0xe091
// ================================================

void UNK_0xe091() // UNK_0xe091
{
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x000a);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe0a9: WORD 'UNK_0xe0ab' codep=0x224c parp=0xe0ab
// ================================================

void UNK_0xe0ab() // UNK_0xe0ab
{
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  _minus_(); // -
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x000c);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe0db: WORD 'UNK_0xe0dd' codep=0x224c parp=0xe0dd
// ================================================

void UNK_0xe0dd() // UNK_0xe0dd
{
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0010);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe0f7: WORD 'UNK_0xe0f9' codep=0x224c parp=0xe0f9
// ================================================

void UNK_0xe0f9() // UNK_0xe0f9
{
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0012);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe10b: WORD 'UNK_0xe10d' codep=0x224c parp=0xe10d
// ================================================

void UNK_0xe10d() // UNK_0xe10d
{
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0014);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe127: WORD 'UNK_0xe129' codep=0x224c parp=0xe129
// ================================================

void UNK_0xe129() // UNK_0xe129
{
  Push(pp_UNK_0xdbf8); // UNK_0xdbf8
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0016);
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xe139: WORD 'UNK_0xe13b' codep=0x224c parp=0xe13b
// ================================================

void UNK_0xe13b() // UNK_0xe13b
{
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0018);
  Push(0); // 0
  FILL(); // FILL
  UNK_0xdf23(); // UNK_0xdf23
  UNK_0xdf51(); // UNK_0xdf51
  UNK_0xdf75(); // UNK_0xdf75
  UNK_0xdf95(); // UNK_0xdf95
  UNK_0xdfad(); // UNK_0xdfad
  UNK_0xdfc5(); // UNK_0xdfc5
  UNK_0xdfdd(); // UNK_0xdfdd
  UNK_0xdff1(); // UNK_0xdff1
  UNK_0xe01b(); // UNK_0xe01b
  UNK_0xe033(); // UNK_0xe033
  UNK_0xe063(); // UNK_0xe063
  UNK_0xe091(); // UNK_0xe091
  UNK_0xe0ab(); // UNK_0xe0ab
  UNK_0xe0dd(); // UNK_0xe0dd
  UNK_0xe0f9(); // UNK_0xe0f9
  UNK_0xe10d(); // UNK_0xe10d
  UNK_0xe129(); // UNK_0xe129
}


// ================================================
// 0xe169: WORD 'UNK_0xe16b' codep=0xe16b parp=0xe16b
// ================================================
// 0xe16b: push   si
// 0xe16c: push   di
// 0xe16d: push   es
// 0xe16e: mov    cx,[5DD3]
// 0xe172: mov    es,cx
// 0xe174: mov    si,[569B]
// 0xe178: mov    di,[5DDE]
// 0xe17c: mov    cx,[5686]
// 0xe180: mov    dl,[DBD4]
// 0xe184: mov    dh,[DBD8]
// 0xe188: mov    bl,[DBDC]
// 0xe18c: es:    
// 0xe18d: mov    al,[si]
// 0xe18f: sub    al,dl
// 0xe191: es:    
// 0xe192: mov    [di],al
// 0xe194: inc    si
// 0xe195: inc    di
// 0xe196: es:    
// 0xe197: mov    al,[si]
// 0xe199: sub    al,dh
// 0xe19b: es:    
// 0xe19c: mov    [di],al
// 0xe19e: inc    si
// 0xe19f: inc    di
// 0xe1a0: es:    
// 0xe1a1: mov    al,[si]
// 0xe1a3: sub    al,bl
// 0xe1a5: es:    
// 0xe1a6: mov    [di],al
// 0xe1a8: inc    si
// 0xe1a9: inc    di
// 0xe1aa: loop   E18C
// 0xe1ac: pop    es
// 0xe1ad: pop    di
// 0xe1ae: pop    si
// 0xe1af: lodsw
// 0xe1b0: mov    bx,ax
// 0xe1b2: jmp    word ptr [bx]

// ================================================
// 0xe1b4: WORD 'UNK_0xe1b6' codep=0xe1b6 parp=0xe1b6
// ================================================
// 0xe1b6: push   di
// 0xe1b7: push   bp
// 0xe1b8: push   si
// 0xe1b9: mov    si,DCC2
// 0xe1bc: mov    cx,0003
// 0xe1bf: mov    dh,[si]
// 0xe1c1: add    si,02
// 0xe1c4: mov    dl,[si]
// 0xe1c6: add    si,02
// 0xe1c9: mov    bh,[si]
// 0xe1cb: add    si,02
// 0xe1ce: mov    ax,[si]
// 0xe1d0: mov    [DC0C],ax
// 0xe1d4: add    si,02
// 0xe1d7: push   si
// 0xe1d8: push   cx
// 0xe1d9: sub    cx,03
// 0xe1dc: neg    cx
// 0xe1de: shl    cx,1
// 0xe1e0: add    cx,[56A6]
// 0xe1e4: mov    di,cx
// 0xe1e6: mov    si,[5DDE]
// 0xe1ea: push   es
// 0xe1eb: mov    cx,[5DD3]
// 0xe1ef: mov    es,cx
// 0xe1f1: mov    cx,[5686]
// 0xe1f5: mov    bp,[DC0C]
// 0xe1f9: es:    
// 0xe1fa: mov    al,[si]
// 0xe1fc: inc    si
// 0xe1fd: imul   dh
// 0xe1ff: add    bp,ax
// 0xe201: es:    
// 0xe202: mov    al,[si]
// 0xe204: inc    si
// 0xe205: imul   dl
// 0xe207: add    bp,ax
// 0xe209: es:    
// 0xe20a: mov    al,[si]
// 0xe20c: inc    si
// 0xe20d: imul   bh
// 0xe20f: add    bp,ax
// 0xe211: es:    
// 0xe212: mov    [di],bp
// 0xe214: add    di,06
// 0xe217: loop   E1F5
// 0xe219: pop    es
// 0xe21a: pop    cx
// 0xe21b: pop    si
// 0xe21c: loop   E1BF
// 0xe21e: pop    si
// 0xe21f: pop    bp
// 0xe220: pop    di
// 0xe221: lodsw
// 0xe222: mov    bx,ax
// 0xe224: jmp    word ptr [bx]

// ================================================
// 0xe226: WORD 'UNK_0xe228' codep=0xe228 parp=0xe228
// ================================================
// 0xe228: push   di
// 0xe229: push   bp
// 0xe22a: push   si
// 0xe22b: push   es
// 0xe22c: mov    di,[56A6]
// 0xe230: add    di,04
// 0xe233: mov    si,[5DEC]
// 0xe237: mov    cx,[5DD3]
// 0xe23b: mov    es,cx
// 0xe23d: mov    bp,[DC14]
// 0xe241: mov    cx,[5686]
// 0xe245: es:    
// 0xe246: mov    bx,[di]
// 0xe248: sub    di,02
// 0xe24b: es:    
// 0xe24c: mov    ax,[di]
// 0xe24e: imul   bp
// 0xe250: idiv   bx
// 0xe252: add    ax,si
// 0xe254: es:    
// 0xe255: mov    [di],ax
// 0xe257: sub    di,02
// 0xe25a: es:    
// 0xe25b: mov    ax,[di]
// 0xe25d: imul   word ptr [DC10]
// 0xe261: idiv   bx
// 0xe263: add    ax,[5DFA]
// 0xe267: es:    
// 0xe268: mov    [di],ax
// 0xe26a: add    di,0A
// 0xe26d: loop   E245
// 0xe26f: pop    es
// 0xe270: pop    si
// 0xe271: pop    bp
// 0xe272: pop    di
// 0xe273: lodsw
// 0xe274: mov    bx,ax
// 0xe276: jmp    word ptr [bx]

// ================================================
// 0xe278: WORD 'UNK_0xe27a' codep=0x224c parp=0xe27a
// ================================================

void UNK_0xe27a() // UNK_0xe27a
{
  DUP(); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  SWAP(); // SWAP
  goto label4;

  label1:
  DUP(); // DUP
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x0017);
  _minus_(); // -
  Push(-Pop()); // NEGATE
  goto label4;

  label2:
  DUP(); // DUP
  Push(0x0024);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(cc__minus_1); // -1
  SWAP(); // SWAP
  Push(0x0018);
  _minus_(); // -
  goto label4;

  label3:
  Push(cc__minus_1); // -1
  SWAP(); // SWAP
  Push(0x002f);
  _minus_(); // -
  Push(-Pop()); // NEGATE

  label4:
  Push(pp_UNK_0xdb92); // UNK_0xdb92
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  SWAP(); // SWAP
  Push(cc__minus_1); // -1
  _eq_(); // =
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe2e4: WORD 'UNK_0xe2e6' codep=0x224c parp=0xe2e6
// ================================================

void UNK_0xe2e6() // UNK_0xe2e6
{
  DUP(); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x000b);
  _minus_(); // -
  Push(-Pop()); // NEGATE
  goto label4;

  label1:
  DUP(); // DUP
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(cc__minus_1); // -1
  SWAP(); // SWAP
  Push(0x000c);
  _minus_(); // -
  goto label4;

  label2:
  DUP(); // DUP
  Push(0x0024);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(cc__minus_1); // -1
  SWAP(); // SWAP
  Push(0x0023);
  _minus_(); // -
  Push(-Pop()); // NEGATE
  goto label4;

  label3:
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x0024);
  _minus_(); // -

  label4:
  Push(pp_UNK_0xdb92); // UNK_0xdb92
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  SWAP(); // SWAP
  Push(cc__minus_1); // -1
  _eq_(); // =
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe356: WORD 'UNK_0xe358' codep=0x224c parp=0xe358
// ================================================

void UNK_0xe358() // UNK_0xe358
{
  DUP(); // DUP
  Push(0x000b);
  _minus_(); // -
  ABS(); // ABS
  OVER(); // OVER
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-

  label1:
  Push(pp_UNK_0xdb92); // UNK_0xdb92
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe386: WORD 'UNK_0xe388' codep=0x224c parp=0xe388
// ================================================

void UNK_0xe388() // UNK_0xe388
{
  DUP(); // DUP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0017);
  SWAP(); // SWAP
  _minus_(); // -
  ABS(); // ABS

  label1:
  Push(pp_UNK_0xdb92); // UNK_0xdb92
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xe3a6: WORD 'UNK_0xe3a8' codep=0x224c parp=0xe3a8
// ================================================

void UNK_0xe3a8() // UNK_0xe3a8
{
  DUP(); // DUP
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  _ex_(); // !
  Push(0x00b0);
  Push(0x0064);
  _star__slash_(); // */
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  _ex_(); // !
}


// ================================================
// 0xe3be: WORD 'UNK_0xe3c0' codep=0x224c parp=0xe3c0
// ================================================

void UNK_0xe3c0() // UNK_0xe3c0
{
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  Push(Read16(Pop())); // @
  DUP(); // DUP
  UNK_0xe358(); // UNK_0xe358
  Push(pp_UNK_0xdbfc); // UNK_0xdbfc
  _ex_(); // !
  UNK_0xe388(); // UNK_0xe388
  Push(pp_UNK_0xdc00); // UNK_0xdc00
  _ex_(); // !
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  Push(Read16(Pop())); // @
  DUP(); // DUP
  UNK_0xe27a(); // UNK_0xe27a
  Push(pp_UNK_0xdbf0); // UNK_0xdbf0
  _ex_(); // !
  UNK_0xe2e6(); // UNK_0xe2e6
  Push(pp_UNK_0xdbf4); // UNK_0xdbf4
  _ex_(); // !
  Push(cc_UNK_0xdb8a); // UNK_0xdb8a
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbf8); // UNK_0xdbf8
  _ex_(); // !
  Push(pp_UNK_0xdcc2); // UNK_0xdcc2
  Push(0x0018);
  Push(0); // 0
  FILL(); // FILL
  UNK_0xdff1(); // UNK_0xdff1
  UNK_0xe01b(); // UNK_0xe01b
  UNK_0xe033(); // UNK_0xe033
  UNK_0xe063(); // UNK_0xe063
  UNK_0xe091(); // UNK_0xe091
  UNK_0xe0ab(); // UNK_0xe0ab
  UNK_0xe0dd(); // UNK_0xe0dd
  UNK_0xe0f9(); // UNK_0xe0f9
  UNK_0xe10d(); // UNK_0xe10d
  UNK_0xe129(); // UNK_0xe129
}


// ================================================
// 0xe40e: WORD 'UNK_0xe410' codep=0x224c parp=0xe410
// ================================================

void UNK_0xe410() // UNK_0xe410
{
  Push(0x0086);
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(0x6ba6);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  _ex_(); // !
  Push(0); // 0
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(0x6ae8);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN_i_); // VIN'
  _ex_(); // !
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  _ex_(); // !
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  _ex_(); // !
  UNK_0xe1b6(); // UNK_0xe1b6
  Push(0x003e);
  Push(pp__n_IN); // #IN
  _ex_(); // !
  UNK_0xe228(); // UNK_0xe228
}


// ================================================
// 0xe460: WORD 'UNK_0xe462' codep=0x224c parp=0xe462
// ================================================

void UNK_0xe462() // UNK_0xe462
{
  DUP(); // DUP
  _gt_R(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  FACET(); // FACET
  LC_at_(); // LC@
  Push(cc__4); // 4
  SWAP(); // SWAP
  XFORMVE(); // XFORMVE
  L_at_(); // L@
  R_gt_(); // R>
  Push(0x003e);
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  SWAP(); // SWAP
  XFORMVE(); // XFORMVE
  L_at_(); // L@
  _gt_(); // >
}


// ================================================
// 0xe48a: WORD 'UNK_0xe48c' codep=0xe48c parp=0xe48c
// ================================================
// 0xe48c: mov    cx,0004
// 0xe48f: mov    bx,DC38
// 0xe492: add    bx,0E
// 0xe495: pop    ax
// 0xe496: pop    dx
// 0xe497: mov    [bx],dx
// 0xe499: sub    bx,02
// 0xe49c: mov    [bx],ax
// 0xe49e: sub    bx,02
// 0xe4a1: loop   E495
// 0xe4a3: lodsw
// 0xe4a4: mov    bx,ax
// 0xe4a6: jmp    word ptr [bx]

// ================================================
// 0xe4a8: WORD 'UNK_0xe4aa' codep=0xe4aa parp=0xe4aa
// ================================================
// 0xe4aa: add    sp,10
// 0xe4ad: lodsw
// 0xe4ae: mov    bx,ax
// 0xe4b0: jmp    word ptr [bx]

// ================================================
// 0xe4b2: WORD 'UNK_0xe4b4' codep=0x224c parp=0xe4b4
// ================================================

void UNK_0xe4b4() // UNK_0xe4b4
{
  Push(cc_POLYSEG); // POLYSEG
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I'
  Push(h); // I
  LC_at_(); // LC@
  _ex_COLOR(); // !COLOR
  Push(h); // I'
  Push(h); // I
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  Push(h); // I'
  Push(h); // I
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xdd2c(); // UNK_0xdd2c
  Push(h); // I'
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(h); // I'
  Push(h); // I
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xdd2c(); // UNK_0xdd2c
  Push(h); // I'
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(h); // I'
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xdd2c(); // UNK_0xdd2c
  Push(h); // I'
  Push(h); // I
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  R_gt_(); // R>
  R_gt_(); // R>
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xdd2c(); // UNK_0xdd2c
  UNK_0xe48c(); // UNK_0xe48c
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(pp_UNK_0xdc5a); // UNK_0xdc5a
  Push(pp_OIN); // OIN
  _ex_(); // !
  Push(pp_UNK_0xdc86); // UNK_0xdc86
  Push(pp_OOUT); // OOUT
  _ex_(); // !
  Push(0); // 0
  Push(pp__ask_OPEN); // ?OPEN
  _ex_(); // !
  Push(cc__4); // 4
  Push(pp__n_IN); // #IN
  _ex_(); // !
  CLIPPER(); // CLIPPER
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) return;
  SCANPOL(); // SCANPOL
  LFILLPO(); // LFILLPO
}


// ================================================
// 0xe54e: WORD 'UNK_0xe550' codep=0x224c parp=0xe550
// ================================================

void UNK_0xe550() // UNK_0xe550
{
  Push(0); // 0
  OVER(); // OVER
  XFORMVE(); // XFORMVE
  L_at_(); // L@
  Push(2); // 2
  ROT(); // ROT
  XFORMVE(); // XFORMVE
  L_at_(); // L@
}


// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564
// ================================================

void UNK_0xe564() // UNK_0xe564
{
  Push(0); // 0
  SWAP(); // SWAP
  FACET(); // FACET
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I
  Push(h); // I'
  LC_at_(); // LC@
  UNK_0xe550(); // UNK_0xe550
  Push(h); // I
  Push(h); // I'
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  UNK_0xe550(); // UNK_0xe550
  Push(h); // I
  Push(h); // I'
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xe550(); // UNK_0xe550
  R_gt_(); // R>
  R_gt_(); // R>
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xe550(); // UNK_0xe550
  SETQUAD(); // SETQUAD
}


// ================================================
// 0xe59a: WORD 'UNK_0xe59c' codep=0x224c parp=0xe59c
// ================================================

void UNK_0xe59c() // UNK_0xe59c
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DK_minus_GREE(); // DK-GREE
  goto label2;

  label1:
  BLACK(); // BLACK

  label2:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(0x000b);
  _star__slash_(); // */
  DUP(); // DUP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  Push(0x0032);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0024);
  Push(0x003c);
  Push(i); // I
  _dot_CIRCLE(); // .CIRCLE
  i++;
  } while(i<imax); // (LOOP) 0xfff2


  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0x0024);
  Push(0x003d);
  Push(j); // I
  _dot_CIRCLE(); // .CIRCLE
  j++;
  } while(j<jmax); // (LOOP) 0xfff2

}


// ================================================
// 0xe5f8: WORD 'UNK_0xe5fa' codep=0x1d29 parp=0xe5fa
// ================================================
// 0xe5fa: db 0x00 0x00 '  '

// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe
// ================================================

void UNK_0xe5fe() // UNK_0xe5fe
{
  UNK_0xe3c0(); // UNK_0xe3c0
  UNK_0xe410(); // UNK_0xe410
  Push(pp_UNK_0xe5fa); // UNK_0xe5fa
  OFF(); // OFF
  Push(0x0048);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe462(); // UNK_0xe462
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xe564(); // UNK_0xe564
  Push(0); // 0
  Push(i); // I
  FACE(); // FACE
  L_at_(); // L@
  Push(2); // 2
  Push(i); // I
  FACE(); // FACE
  LC_at_(); // LC@
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  UNK_0xe4b4(); // UNK_0xe4b4
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xfff6

  Pop(); // DROP
  UNK_0xe4aa(); // UNK_0xe4aa

  label1:
  _ask_TERMINAL(); // ?TERMINAL
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xe5fa); // UNK_0xe5fa
  ON(); // ON
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc2

  UNK_0xe59c(); // UNK_0xe59c
}


// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x224c parp=0xe654
// ================================================

void UNK_0xe654() // UNK_0xe654
{
  Push(0x0028);
  _slash_(); // /
  Push(0x0017);
  SWAP(); // SWAP
  _minus_(); // -
  SWAP(); // SWAP
  Push(0x0030);
  _slash_(); // /
  SWAP(); // SWAP
}


// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x224c parp=0xe670
// ================================================

void UNK_0xe670() // UNK_0xe670
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(0x0047);
  RRND(); // RRND
  Push(0); // 0
  Push(0x0077);
  RRND(); // RRND
  LPLOT(); // LPLOT
  i++;
  } while(i<imax); // (LOOP) 0xffec

}


// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x224c parp=0xe68e
// ================================================

void UNK_0xe68e() // UNK_0xe68e
{
  DK_minus_GREE(); // DK-GREE
  _ex_COLOR(); // !COLOR
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  DARK(); // DARK
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(pp_SEED); // SEED
  _ex_(); // !
  Push(1); // 1
  Push(cc__4); // 4
  RRND(); // RRND
  UNK_0xe670(); // UNK_0xe670
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(cc__5); // 5
  RRND(); // RRND
  UNK_0xe670(); // UNK_0xe670
  RED(); // RED
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(cc__5); // 5
  RRND(); // RRND
  UNK_0xe670(); // UNK_0xe670
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  Push(cc__4); // 4
  Push(cc__9); // 9
  RRND(); // RRND
  UNK_0xe670(); // UNK_0xe670
  return;

  label1:
  BFILL(); // BFILL
}


// ================================================
// 0xe6da: WORD 'UNK_0xe6dc' codep=0x224c parp=0xe6dc
// ================================================

void UNK_0xe6dc() // UNK_0xe6dc
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  UNK_0xe68e(); // UNK_0xe68e
  UNK_0xe5fe(); // UNK_0xe5fe
  Push(pp_UNK_0xe5fa); // UNK_0xe5fa
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  V_gt_DISPL(); // V>DISPL

  label1:
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xe6f6: WORD 'SHOWSITE' codep=0x224c parp=0xe703
// ================================================

void SHOWSITE() // SHOWSITE
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe654(); // UNK_0xe654
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  _ex_(); // !
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  _ex_(); // !
  UNK_0xe6dc(); // UNK_0xe6dc
}


// ================================================
// 0xe719: WORD '>VIEWSITE' codep=0x224c parp=0xe727
// ================================================

void _gt_VIEWSITE() // >VIEWSITE
{
  Push(0x012c);
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(cc__5); // 5
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(pp_UNK_0xdc34); // UNK_0xdc34
  _ex_(); // !

  label2:
  SHOWSITE(); // SHOWSITE
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x012c);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xdc34); // UNK_0xdc34
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x012c);
  MIN(); // MIN
  UNK_0xe3a8(); // UNK_0xe3a8
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe767: WORD 'UNK_0xe769' codep=0x224c parp=0xe769
// ================================================

void UNK_0xe769() // UNK_0xe769
{
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(Pop()>>1); // 2/
}


// ================================================
// 0xe7a5: WORD 'UNK_0xe7a7' codep=0x224c parp=0xe7a7
// ================================================

void UNK_0xe7a7() // UNK_0xe7a7
{
  Push(pp_SIGNEXT); // SIGNEXT
  ON(); // ON
  Push(pp_SPHEREW); // SPHEREW
  OFF(); // OFF
  Push(0x6ac1);
  SETLARR(); // SETLARR
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop() + Pop()); // +
  Push(i); // J
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  UNK_0xe769(); // UNK_0xe769
  Push(j); // I
  Push(i); // J
  _9X9COAR(); // 9X9COAR
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffbe

  i++;
  } while(i<imax); // (LOOP) 0xffb4

}


// ================================================
// 0xe80b: WORD 'UNK_0xe80d' codep=0x224c parp=0xe80d
// ================================================

void UNK_0xe80d() // UNK_0xe80d
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _minus_(); // -
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_X1); // X1
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_Y1); // Y1
  _ex_(); // !
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(pp_X1); // X1
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_Y1); // Y1
  Push(Read16(Pop())); // @
  Push(i); // J
  _minus_(); // -
  CONTOUR(); // CONTOUR
  LC_at_(); // LC@
  Push(j); // I
  Push(i); // J
  _9X9FINE(); // 9X9FINE
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xe863: WORD 'UNK_0xe865' codep=0x224c parp=0xe865
// ================================================

void UNK_0xe865() // UNK_0xe865
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  GPOLY(); // GPOLY
  LC_at_(); // LC@
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  OVER(); // OVER
  GVERTEX(); // GVERTEX
  LC_at_(); // LC@
  Push(i); // J
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  j++;
  } while(j<jmax); // (LOOP) 0xffe6

  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Pop(); // DROP
}


// ================================================
// 0xe89f: WORD 'UNK_0xe8a1' codep=0x224c parp=0xe8a1
// ================================================

void UNK_0xe8a1() // UNK_0xe8a1
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  GPOLY(); // GPOLY
  LC_at_(); // LC@
  Push(2); // 2
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(Pop()*2); // 2*
  OVER(); // OVER
  XFORMVE(); // XFORMVE
  L_at_(); // L@
  Push(i); // J
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop()-1); // 1-
  Push(-Pop()); // NEGATE
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  _ex_(); // !
  j++;
  } while(j<jmax); // (LOOP) 0xffde

  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Pop(); // DROP
}


// ================================================
// 0xe8e3: WORD 'UNK_0xe8e5' codep=0x224c parp=0xe8e5
// ================================================

void UNK_0xe8e5() // UNK_0xe8e5
{
  Push(0x0075);
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(0x6ba6);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  _ex_(); // !
  Push(0); // 0
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(0x6b6a);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN_i_); // VIN'
  _ex_(); // !
  Push(0x6b31);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  _ex_(); // !
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  _ex_(); // !
  UNK_0xe16b(); // UNK_0xe16b
  UNK_0xe1b6(); // UNK_0xe1b6
  UNK_0xe228(); // UNK_0xe228
}


// ================================================
// 0xe945: WORD 'UNK_0xe947' codep=0x224c parp=0xe947
// ================================================

void UNK_0xe947() // UNK_0xe947
{
  _gt_R(); // >R
  Push(0); // 0
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(h); // J
  GPOLY(); // GPOLY
  LC_at_(); // LC@
  Push(cc__4); // 4
  SWAP(); // SWAP
  XFORMVE(); // XFORMVE
  L_at_(); // L@
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  _minus_(); // -
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe977: WORD 'UNK_0xe979' codep=0x224c parp=0xe979
// ================================================

void UNK_0xe979() // UNK_0xe979
{
  Push(cc__4); // 4
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(pp_VIN_i_); // VIN'
  _ex_(); // !
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  _at_DS(); // @DS
  Push(pp__3DSEG); // 3DSEG
  _ex_(); // !
  UNK_0xe16b(); // UNK_0xe16b
  UNK_0xe1b6(); // UNK_0xe1b6
}


// ================================================
// 0xe99d: WORD 'UNK_0xe99f' codep=0x224c parp=0xe99f
// ================================================

void UNK_0xe99f() // UNK_0xe99f
{
  Push(0x3e80);
  Push(0x3e80);
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(0xc180);
  SETCLIP(); // SETCLIP
}


// ================================================
// 0xe9b1: WORD 'UNK_0xe9b3' codep=0x224c parp=0xe9b3
// ================================================

void UNK_0xe9b3() // UNK_0xe9b3
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  _ex_(); // !
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xe9eb: WORD 'UNK_0xe9ed' codep=0x224c parp=0xe9ed
// ================================================

void UNK_0xe9ed() // UNK_0xe9ed
{
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  _ex_(); // !
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffce

}


// ================================================
// 0xea29: WORD 'UNK_0xea2b' codep=0x224c parp=0xea2b
// ================================================

void UNK_0xea2b() // UNK_0xea2b
{
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xea57: WORD 'UNK_0xea59' codep=0x224c parp=0xea59
// ================================================

void UNK_0xea59() // UNK_0xea59
{
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffde

}


// ================================================
// 0xea87: WORD 'UNK_0xea89' codep=0x224c parp=0xea89
// ================================================

void UNK_0xea89() // UNK_0xea89
{
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xeab5: WORD 'UNK_0xeab7' codep=0x224c parp=0xeab7
// ================================================

void UNK_0xeab7() // UNK_0xeab7
{
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  _ex_(); // !
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffd4

}


// ================================================
// 0xeaef: WORD 'UNK_0xeaf1' codep=0x224c parp=0xeaf1
// ================================================

void UNK_0xeaf1() // UNK_0xeaf1
{
  UNK_0xe865(); // UNK_0xe865
  UNK_0xe979(); // UNK_0xe979
  UNK_0xe99f(); // UNK_0xe99f
  UNK_0xe9b3(); // UNK_0xe9b3
  Push(cc__4); // 4
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(pp_UNK_0xdc5a); // UNK_0xdc5a
  Push(pp_OIN); // OIN
  _ex_(); // !
  Push(pp_UNK_0xdc86); // UNK_0xdc86
  Push(pp_OOUT); // OOUT
  _ex_(); // !
  CLIPPER(); // CLIPPER
  UNK_0xea2b(); // UNK_0xea2b
  UNK_0xe9ed(); // UNK_0xe9ed
  Push(cc__4); // 4
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  CLIPPER(); // CLIPPER
  UNK_0xea59(); // UNK_0xea59
  UNK_0xea89(); // UNK_0xea89
  VCLIPSE(); // VCLIPSE
  Push(pp_UNK_0xdc90); // UNK_0xdc90
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  UNK_0xe228(); // UNK_0xe228
  UNK_0xeab7(); // UNK_0xeab7
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Push(0); // 0
  SWAP(); // SWAP
  GRIDCOL(); // GRIDCOL
  OVER(); // OVER
  OVER(); // OVER
  LC_at_(); // LC@
  Push(pp_COLOR); // COLOR
  _ex_(); // !
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  Push(pp_DCOLOR); // DCOLOR
  _ex_(); // !
}


// ================================================
// 0xeb5f: WORD 'UNK_0xeb61' codep=0x224c parp=0xeb61
// ================================================

void UNK_0xeb61() // UNK_0xeb61
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  LLINE(); // LLINE
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(h); // J
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(h); // J
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xebcf: WORD 'UNK_0xebd1' codep=0x224c parp=0xebd1
// ================================================

void UNK_0xebd1() // UNK_0xebd1
{
  UNK_0xe13b(); // UNK_0xe13b
  UNK_0xe8e5(); // UNK_0xe8e5
  Push(0x0059);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe947(); // UNK_0xe947
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  UNK_0xe8a1(); // UNK_0xe8a1
  Push(cc__4); // 4
  Push(pp__n_IN); // #IN
  _ex_(); // !
  goto label4;

  label2:
  Push(i); // I
  UNK_0xeaf1(); // UNK_0xeaf1

  label4:
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label3;
  Push(pp_UNK_0xdc38); // UNK_0xdc38
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(pp_UNK_0xdc64); // UNK_0xdc64
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(pp_UNK_0xdc5a); // UNK_0xdc5a
  Push(pp_OIN); // OIN
  _ex_(); // !
  Push(pp_UNK_0xdc86); // UNK_0xdc86
  Push(pp_OOUT); // OOUT
  _ex_(); // !
  Push(pp__ask_OPEN); // ?OPEN
  OFF(); // OFF
  CLIPPER(); // CLIPPER

  label3:
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xeb45(); // UNK_0xeb45
  SCANPOL(); // SCANPOL
  LFILLPO(); // LFILLPO
  Push(i); // I
  Push(0x0018);
  _gt_(); // >
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xeb61(); // UNK_0xeb61

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xff88

}


// ================================================
// 0xec59: WORD 'SEEGRID' codep=0x224c parp=0xec65
// ================================================

void SEEGRID() // SEEGRID
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  UNK_0xebd1(); // UNK_0xebd1
  V_gt_DISPL(); // V>DISPL
  DCLIPSE(); // DCLIPSE
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec7b: WORD 'UNK_0xec7d' codep=0x224c parp=0xec7d
// ================================================

void UNK_0xec7d() // UNK_0xec7d
{
  Push(0x0075);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(1); // 1
  Push(i); // I
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  i++;
  } while(i<imax); // (LOOP) 0xfff4

}


// ================================================
// 0xec95: WORD 'UNK_0xec97' codep=0x224c parp=0xec97
// ================================================

void UNK_0xec97() // UNK_0xec97
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _ex_XYSEED(); // !XYSEED
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__7); // 7
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(1); // 1
  Push(i); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(0x002e);
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xecd3: WORD 'UNK_0xecd5' codep=0x224c parp=0xecd5
// ================================================

void UNK_0xecd5() // UNK_0xecd5
{
  Push(0); // 0
  COLORMA(); // COLORMA
  Push(0x0059);
  Push(0x0019);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  GRIDCOL(); // GRIDCOL
  LC_at_(); // LC@
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(1); // 1
  Push(j); // I
  Push(i); // J
  GPOLY(); // GPOLY
  LC_at_(); // LC@
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffee


  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__5); // 5
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(i); // J
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  L_plus__minus__at_(); // L+-@
  COLORMA(); // COLORMA
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0100);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(i); // J
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  GRIDCOL(); // GRIDCOL
  L_ex_(); // L!
  j++;
  } while(j<jmax); // (LOOP) 0xffce

  i++;
  } while(i<imax); // (LOOP) 0xffc4

  Push(cc__8); // 8
  Push(0); // 0

  signed short int k = Pop();
  signed short int kmax = Pop();
  do // (DO)
  {
  Push(cc__8); // 8
  Push(0); // 0

  signed short int l = Pop();
  signed short int lmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(k); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(l); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  L_plus__minus__at_(); // L+-@
  COLORMA(); // COLORMA
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0100);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(k); // J
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(l); // I
  Push(Pop() + Pop()); // +
  Push(0x0019);
  Push(Pop() + Pop()); // +
  GRIDCOL(); // GRIDCOL
  L_ex_(); // L!
  l++;
  } while(l<lmax); // (LOOP) 0xffc2

  k++;
  } while(k<kmax); // (LOOP) 0xffb8

  UNK_0xec7d(); // UNK_0xec7d
}


// ================================================
// 0xedaf: WORD 'UNK_0xedb1' codep=0x224c parp=0xedb1
// ================================================

void UNK_0xedb1() // UNK_0xedb1
{
  Push(0x0075);
  Push(0x0024);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(1); // 1
  Push(i); // I
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  Pop(); // DROP
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{
  Push(0); // 0
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  _9X9COAR(); // 9X9COAR
  L_plus__minus__at_(); // L+-@
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xfff4

  i++;
  } while(i<imax); // (LOOP) 0xffea

  Push(0x0051);
  _slash_(); // /
  UNK_0xedb1(); // UNK_0xedb1
}


// ================================================
// 0xedf9: WORD 'UNK_0xedfb' codep=0x224c parp=0xedfb
// ================================================

void UNK_0xedfb() // UNK_0xedfb
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe654(); // UNK_0xe654
  Push(0x0017);
  SWAP(); // SWAP
  _minus_(); // -
  Push(Pop()+2); // 2+
  Push(pp_Y1); // Y1
  _ex_(); // !
  Push(2); // 2
  _minus_(); // -
  Push(pp_X1); // X1
  _ex_(); // !
  Push(pp_SPHEREW); // SPHEREW
  ON(); // ON
  Push(pp_SIGNEXT); // SIGNEXT
  ON(); // ON
  Push(0x6a99);
  SETLARR(); // SETLARR
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(pp_X1); // X1
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_Y1); // Y1
  Push(Read16(Pop())); // @
  Push(i); // J
  _minus_(); // -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(1); // 1
  Push(i); // J
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffda

  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xee63: WORD 'UNK_0xee65' codep=0x224c parp=0xee65
// ================================================

void UNK_0xee65() // UNK_0xee65
{
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  _9X9COAR(); // 9X9COAR
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe0

  i++;
  } while(i<imax); // (LOOP) 0xffd6

}


// ================================================
// 0xee99: WORD 'UNK_0xee9b' codep=0x224c parp=0xee9b
// ================================================

void UNK_0xee9b() // UNK_0xee9b
{
  Push(cc__9); // 9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__9); // 9
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  _9X9FINE(); // 9X9FINE
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe0

  i++;
  } while(i<imax); // (LOOP) 0xffd6

}


// ================================================
// 0xeecf: WORD 'UNK_0xeed1' codep=0x224c parp=0xeed1
// ================================================

void UNK_0xeed1() // UNK_0xeed1
{
  UNK_0xedfb(); // UNK_0xedfb
  UNK_0xedcf(); // UNK_0xedcf
  UNK_0xed17(); // UNK_0xed17
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  OFF(); // OFF
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  _ex_(); // !
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  OFF(); // OFF
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  OFF(); // OFF
  Push(0x0032);
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex_(); // !
  Push(pp_UNK_0xdbd0); // UNK_0xdbd0
  ON(); // ON
  Push(pp_UNK_0xdbd4); // UNK_0xdbd4
  OFF(); // OFF
  Push(pp_UNK_0xdbd8); // UNK_0xdbd8
  OFF(); // OFF
  Push(pp_UNK_0xdbdc); // UNK_0xdbdc
  OFF(); // OFF
  Push(0x001e);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  Push(0x0023);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  UNK_0xedfb(); // UNK_0xedfb
  UNK_0xee65(); // UNK_0xee65
  UNK_0xed17(); // UNK_0xed17
  Push(0x008c);
  Push(0x0028);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  Push(0x001e);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xef31: WORD 'UNK_0xef33' codep=0x224c parp=0xef33
// ================================================

void UNK_0xef33() // UNK_0xef33
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x000c);
  MOD(); // MOD
  _minus_(); // -
  Push(0x0018);
  _minus_(); // -
  Push(pp_XCON); // XCON
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0014);
  MOD(); // MOD
  _minus_(); // -
  Push(0x0028);
  _minus_(); // -
  Push(pp_YCON); // YCON
  _ex_(); // !
  Push(pp_DXCON); // DXCON
  OFF(); // OFF
  Push(pp_DYCON); // DYCON
  OFF(); // OFF
}


// ================================================
// 0xef6d: WORD 'UNK_0xef6f' codep=0x224c parp=0xef6f
// ================================================

void UNK_0xef6f() // UNK_0xef6f
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0012);
  _minus_(); // -
  Push(pp_XVIS); // XVIS
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  _minus_(); // -
  Push(pp_YVIS); // YVIS
  _ex_(); // !
  Push(pp_DXVIS); // DXVIS
  OFF(); // OFF
  Push(pp_DYVIS); // DYVIS
  OFF(); // OFF
}


// ================================================
// 0xef95: WORD 'UNK_0xef97' codep=0x224c parp=0xef97
// ================================================

void UNK_0xef97() // UNK_0xef97
{
  Push(0x0014);
  _minus_(); // -
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  OVER(); // OVER
  Push(i); // J
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  GVERTEX(); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffda

  i++;
  } while(i<imax); // (LOOP) 0xffd0

  Pop(); // DROP
}


// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x224c parp=0xefdb
// ================================================

void UNK_0xefdb() // UNK_0xefdb
{
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  _minus_(); // -
  ABS(); // ABS
  Push(0); // 0
  SQRT(); // SQRT
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  _ex_(); // !
}


// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x224c parp=0xeffb
// ================================================

void UNK_0xeffb() // UNK_0xeffb
{
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  UNK_0xe27a(); // UNK_0xe27a
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  Push(Read16(Pop())); // @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  _ex_(); // !
}


// ================================================
// 0xf021: WORD 'UNK_0xf023' codep=0x224c parp=0xf023
// ================================================

void UNK_0xf023() // UNK_0xf023
{
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  _plus__ex_(); // +!
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(0x0018);
  MIN(); // MIN
  Push(0xffe9);
  MAX(); // MAX
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  _ex_(); // !
}


// ================================================
// 0xf041: WORD 'UNK_0xf043' codep=0x224c parp=0xf043
// ================================================

void UNK_0xf043() // UNK_0xf043
{
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  UNK_0xe2e6(); // UNK_0xe2e6
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  Push(Read16(Pop())); // @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_UNK_0xdbd0); // UNK_0xdbd0
  _ex_(); // !
}


// ================================================
// 0xf069: WORD 'UNK_0xf06b' codep=0x224c parp=0xf06b
// ================================================

void UNK_0xf06b() // UNK_0xf06b
{
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(2); // 2
  MAX(); // MAX
  Push(0x0031);
  MIN(); // MIN
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex_(); // !
}


// ================================================
// 0xf085: WORD 'UNK_0xf087' codep=0x224c parp=0xf087
// ================================================

void UNK_0xf087() // UNK_0xf087
{
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbbc); // UNK_0xdbbc
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xe3a8(); // UNK_0xe3a8
}


// ================================================
// 0xf095: WORD 'UNK_0xf097' codep=0x224c parp=0xf097
// ================================================

void UNK_0xf097() // UNK_0xf097
{
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  _plus__ex_(); // +!
}


// ================================================
// 0xf0a1: WORD 'UNK_0xf0a3' codep=0x224c parp=0xf0a3
// ================================================

void UNK_0xf0a3() // UNK_0xf0a3
{
  UNK_0xefdb(); // UNK_0xefdb
  UNK_0xeffb(); // UNK_0xeffb
  UNK_0xf06b(); // UNK_0xf06b
  UNK_0xf043(); // UNK_0xf043
}


// ================================================
// 0xf0ad: WORD 'UNK_0xf0af' codep=0x224c parp=0xf0af
// ================================================

void UNK_0xf0af() // UNK_0xf0af
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_minus_S(); // @INST-S
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0b9: WORD 'UNK_0xf0bb' codep=0x224c parp=0xf0bb
// ================================================

void UNK_0xf0bb() // UNK_0xf0bb
{
  UNK_0xf0af(); // UNK_0xf0af
  Push(0x0017);
  _eq_(); // =
}


// ================================================
// 0xf0c5: WORD 'UNK_0xf0c7' codep=0x224c parp=0xf0c7
// ================================================

void UNK_0xf0c7() // UNK_0xf0c7
{
  UNK_0xf0af(); // UNK_0xf0af
  Push(0x0012);
  _eq_(); // =
}


// ================================================
// 0xf0d1: WORD 'UNK_0xf0d3' codep=0x224c parp=0xf0d3
// ================================================

void UNK_0xf0d3() // UNK_0xf0d3
{
  Push(0x0167);
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  _ex_(); // !
  Push(0x0019);
  DUP(); // DUP
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  _ex_(); // !
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  _ex_(); // !
  Push(cc__7); // 7
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdbd8); // UNK_0xdbd8
  _ex_(); // !
  Push(0xfffb);
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  _ex_(); // !
  Push(cc__8); // 8
  Push(pp_UNK_0xdbbc); // UNK_0xdbbc
  _ex_(); // !
  Push(0x0019);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  Push(1); // 1
  Push(pp_UNK_0xdbd0); // UNK_0xdbd0
  _plus__ex_(); // +!
  Push(0x0023);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  ON(); // ON
  CTINIT(); // CTINIT

  UNK_0x3f39("TOPOGRAPHY NET LOCKED ON");
  _dot_TTY(); // .TTY
  UNK_0xf0bb(); // UNK_0xf0bb
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xec97(); // UNK_0xec97
  UNK_0xecd5(); // UNK_0xecd5

  label1:
  UNK_0xf0a3(); // UNK_0xf0a3
  SEEGRID(); // SEEGRID
  UNK_0xf087(); // UNK_0xf087
  UNK_0xf023(); // UNK_0xf023
  UNK_0xf097(); // UNK_0xf097
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(cc__minus_2); // -2
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  _ex_(); // !

  label2:
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f39("SAFE LANDING, CAPTAIN.");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf19b: WORD 'UNK_0xf19d' codep=0x224c parp=0xf19d
// ================================================

void UNK_0xf19d() // UNK_0xf19d
{
  UNK_0xee65(); // UNK_0xee65
  Push(cc_UNK_0xdb8e); // UNK_0xdb8e
  UNK_0xef97(); // UNK_0xef97
  UNK_0xee9b(); // UNK_0xee9b
  UNK_0xed17(); // UNK_0xed17
  UNK_0xf0d3(); // UNK_0xf0d3
}


// ================================================
// 0xf1ab: WORD 'DESCEND' codep=0x224c parp=0xf1b7
// ================================================

void DESCEND() // DESCEND
{
  CTINIT(); // CTINIT

  UNK_0x3f39("COMPUTING DESCENT PROFILE...");
  _dot_TTY(); // .TTY
  UNK_0xef33(); // UNK_0xef33
  UNK_0xef6f(); // UNK_0xef6f
  Push(0xc317);
  MODULE(); // MODULE
  UNK_0xe7a7(); // UNK_0xe7a7
  UNK_0xe80d(); // UNK_0xe80d
  CTINIT(); // CTINIT

  UNK_0x3f39("AUTOPILOT ENGAGED. DESCENDING...");
  _dot_TTY(); // .TTY
  _gt_VIEWSITE(); // >VIEWSITE
  UNK_0xeed1(); // UNK_0xeed1
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT

  UNK_0x3f39("OUT OF FUEL! CRASH IMMINENT!");
  _dot_TTY(); // .TTY

  label1:
  UNK_0xf19d(); // UNK_0xf19d
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  Push(cc__5); // 5
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  _ex_(); // !
  Push(pp_UNK_0xdbbc); // UNK_0xdbbc
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdbbc); // UNK_0xdbbc
  _ex_(); // !
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  _ex_(); // !

  label2:
  UNK_0xf0a3(); // UNK_0xf0a3
  SEEGRID(); // SEEGRID
  UNK_0xf087(); // UNK_0xf087
  UNK_0xf023(); // UNK_0xf023
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(0x0167);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf097(); // UNK_0xf097

  label1:
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  Push(Read16(Pop())); // @
  Push(0x0031);
  _eq_(); // =
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(0x0167);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  OFF(); // OFF
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  OFF(); // OFF
  Push(0x0032);
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdbd0); // UNK_0xdbd0
  _ex_(); // !
  UNK_0xec7d(); // UNK_0xec7d
  UNK_0xf087(); // UNK_0xf087
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf2b2: WORD 'UNK_0xf2b4' codep=0x224c parp=0xf2b4
// ================================================

void UNK_0xf2b4() // UNK_0xf2b4
{
  UNK_0xedfb(); // UNK_0xedfb
  UNK_0xee65(); // UNK_0xee65
  UNK_0xed17(); // UNK_0xed17
  Push(0x0028);
  Push(0x008c);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  Push(0xffe2);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

  UNK_0xedfb(); // UNK_0xedfb
  UNK_0xedcf(); // UNK_0xedcf
  UNK_0xed17(); // UNK_0xed17
  Push(0x0023);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
  UNK_0xedfb(); // UNK_0xedfb
  Push(1); // 1
  Push(0x000e);
  GVERTEX(); // GVERTEX
  LC_at_(); // LC@
  UNK_0xedb1(); // UNK_0xedb1
  UNK_0xed17(); // UNK_0xed17
  Push(0x001e);
  UNK_0xe3a8(); // UNK_0xe3a8
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x0030);
  MOD(); // MOD
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  _ex_(); // !
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x1d29 parp=0xf310
// ================================================
// 0xf310: db 0x0a 0x00 '  '

// ================================================
// 0xf312: WORD 'UNK_0xf314' codep=0x224c parp=0xf314
// ================================================

void UNK_0xf314() // UNK_0xf314
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe654(); // UNK_0xe654
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  _ex_(); // !
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  _ex_(); // !
  Push(0x012c);
  DUP(); // DUP
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(pp_UNK_0xdbc4); // UNK_0xdbc4
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(cc__6); // 6
  _slash_(); // /
  Push(pp_UNK_0xdc34); // UNK_0xdc34
  _ex_(); // !

  label2:
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc34); // UNK_0xdc34
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdbc4); // UNK_0xdbc4
  Push(Read16(Pop())); // @
  MAX(); // MAX
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf310); // UNK_0xf310
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label3;

  label1:
  Push(cc__minus_1); // -1

  label3:
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  _plus__ex_(); // +!
  UNK_0xe6dc(); // UNK_0xe6dc
  UNK_0xf2fc(); // UNK_0xf2fc
  Push(pp_UNK_0xdc10); // UNK_0xdc10
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbc4); // UNK_0xdbc4
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf37c: WORD 'ASCEND' codep=0x224c parp=0xf387
// ================================================

void ASCEND() // ASCEND
{
  UNK_0xf246(); // UNK_0xf246
  UNK_0xf2b4(); // UNK_0xf2b4
  UNK_0xf314(); // UNK_0xf314
}


// ================================================
// 0xf38f: WORD 'UNK_0xf391' codep=0x224c parp=0xf391
// ================================================

void UNK_0xf391() // UNK_0xf391
{
  UNK_0xdeb0(); // UNK_0xdeb0
  UNK_0xded4(); // UNK_0xded4
  UNK_0xde8c(); // UNK_0xde8c
  UNK_0xddee(); // UNK_0xddee
  UNK_0xde3c(); // UNK_0xde3c
}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(pp_SEED); // SEED
  _ex_(); // !
  Push(cc__5); // 5
  Push(0x0013);
  RRND(); // RRND
  DUP(); // DUP
  Push(pp_UNK_0xf310); // UNK_0xf310
  _ex_(); // !
  Push(pp_UNK_0xdc18); // UNK_0xdc18
  _ex_(); // !
  Push(pp_UNK_0xdc1c); // UNK_0xdc1c
  OFF(); // OFF
  Push(pp_UNK_0xdc04); // UNK_0xdc04
  OFF(); // OFF
  Push(cc_UNK_0xdb86); // UNK_0xdb86
  Push(pp_UNK_0xdc08); // UNK_0xdc08
  _ex_(); // !
}


// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x224c parp=0xf3cb
// ================================================

void UNK_0xf3cb() // UNK_0xf3cb
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  UNK_0xdcdc(); // UNK_0xdcdc
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _slash_(); // /
  ICLOSE(); // ICLOSE
  Push(0x0014);
  MAX(); // MAX
  Push(0x0078);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_UNK_0xdbc4); // UNK_0xdbc4
  _ex_(); // !
  UNK_0xe3a8(); // UNK_0xe3a8
}


// ================================================
// 0xf3f1: WORD 'SKYCASE' codep=0x4a4f parp=0xf3fd
// ================================================
// 0xf3fd: db 0x04 0x00 0x8b 0x4f 0x00 0x00 0x0c 0x4f 0x07 0x00 0xad 0x4f 0x0c 0x00 0xad 0x4f 0x13 0x00 0xad 0x4f '   O   O   O   O   O'

// ================================================
// 0xf411: WORD 'UNK_0xf413' codep=0x224c parp=0xf413
// ================================================

void UNK_0xf413() // UNK_0xf413
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  SKYCASE(); // SKYCASE
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  _ex_(); // !
}


// ================================================
// 0xf41f: WORD 'INIT-ORBIT' codep=0x224c parp=0xf42e
// ================================================

void INIT_minus_ORBIT() // INIT-ORBIT
{
  Push(pp_GLOBALS); // GLOBALS
  _ex_(); // !
  Push(pp__n_CLRMAP); // #CLRMAP
  _ex_(); // !
  SET_minus_COL(); // SET-COL
  UNK_0xf3cb(); // UNK_0xf3cb
  UNK_0xf413(); // UNK_0xf413
  UNK_0xf0bb(); // UNK_0xf0bb
  if (Pop() == 0) goto label1;
  Push(0x6a99);
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0x0061);
  FILLREG(); // FILLREG
  goto label3;

  label1:
  UNK_0xf0c7(); // UNK_0xf0c7
  if (Pop() == 0) goto label2;
  Push(0x6a99);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x008a);
  FILE_st_(); // FILE<
  goto label3;

  label2:
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(0xc302);
  MODULE(); // MODULE

  label3:
  Push(0xc32c);
  MODULE(); // MODULE
  UNK_0xf391(); // UNK_0xf391
  UNK_0xf39f(); // UNK_0xf39f
}


// ================================================
// 0xf486: WORD 'ROTATE' codep=0x224c parp=0xf491
// ================================================

void ROTATE() // ROTATE
{
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xe6dc(); // UNK_0xe6dc
}

// 0xf497: db 0x4f 0x52 0x42 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x29 0x41 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x06 0x00 0x22 0x0f 0x01 0x00 0x54 0xf4 0x07 0x00 0x5f 0xf4 0x08 0x00 0x6c 0xf4 0x03 0x00 0x75 0xf4 0x0a 0x00 0x7a 0x32 0x34 0x30 0x33 0xf4 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x3e 0x62 0x38 0x0c 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xf0 0xff 0x90 0x16 0x00 0x00 0x87 0x28 0x58 0x43 0x4f 0x4d 0x4d 0xa9 0x4c 0x22 0xdc 0xf4 0xfd 0x62 0x02 0x7a 0x30 0x75 0xc9 0x79 0xbe 0xf4 0x84 0xf4 0xdc 0xf4 0x90 0x16 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'ORBIT___________________________)A-CAS OJ  "   T   _   l   u   z2403 L" *8 >b8 F@  >          (XCOMM L"   b z0u y        XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '
  