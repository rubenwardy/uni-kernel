#ifndef FAT_BOOT_H
#define FAT_BOOT_H

struct __attribute__((__packed__)) FAT_BPB {
	/* 00  */ char jmp[3];
	/* 03  */ char oem[8];
	/* 11  */ u16  bytes_per_sector;
	/* 13  */ u8   sectors_per_cluster;
	/* 14  */ u16  reserved_sectors;
	/* 16  */ u8   file_allocation_tables;
	/* 17  */ u16  dictionary entries;
	/* 19  */ u16  total_sectors;
	/* 21  */ u8   media_desc_type;
	/* 22  */ u16  sectors_per_fat;
	/* 24  */ u16  sectors_per_track;
	/* 26  */ u16  number_of_sides;
	/* 28  */ u32  number_of_hiddens_sectors;
	/* 32  */ u32  large_amount_of_sector;
};
typedef struct FAT_BPB FAT_BPB;

struct __attribute__((__packed__)) FAT_EBR {
	/* 36  */ u8   drive_number;
	/* 37  */ u8   flags;
	/* 38  */ u8   signature;
	/* 39  */ u32  volumeID;
	/* 43  */ char volumeLabel[11];
	/* 54  */ char systemIdentifier[8];
	/* 62  */ char bootCode[448];
	/* 510 */ u16  paritionSignature;
};
typedef struct FAT_EBR FAT_EBR;

#endif
