uint8_t keyvault_ec_p[0x1c] = {0xA5, 0x3E, 0x11, 0x3E, 0x46, 0xD8, 0xC9, 0xC1, 0xF0, 0x9D, 0x9B, 0xCB, 0x2A, 0x53, 0x73, 0xD3, 0x79, 0xF6, 0x9D, 0xA2, 0x8D, 0x09, 0x99, 0x9F, 0xED, 0x57, 0xA9, 0x0F};
uint8_t keyvault_ec_a[0x1c] = {0xA5, 0x3E, 0x11, 0x3E, 0x46, 0xD8, 0xC9, 0xC1, 0xF0, 0x9D, 0x9B, 0xCB, 0x2A, 0x53, 0x73, 0xD3, 0x79, 0xF6, 0x9D, 0xA2, 0x8D, 0x09, 0x99, 0x9F, 0xED, 0x57, 0xA9, 0x0C};
uint8_t keyvault_ec_b[0x1c] = {0x90, 0x65, 0x94, 0x1D, 0x29, 0x37, 0x4A, 0x8F, 0x11, 0xDD, 0x1E, 0x54, 0x01, 0x89, 0x43, 0x4E, 0x4A, 0x6E, 0xBF, 0xAF, 0x54, 0x77, 0xF6, 0xC1, 0x72, 0xF6, 0x85, 0x5E};
uint8_t keyvault_ec_N[0x1c] = { 0xA5, 0x3E, 0x11, 0x3E, 0x46, 0xD8, 0xC9, 0xC1, 0xF0, 0x9D, 0x9B, 0xCB, 0x2A, 0x52, 0x26, 0x98, 0xDE, 0xEF, 0x58, 0xDB, 0x1A, 0xD9, 0xAB, 0x7F, 0x04, 0xE3, 0xAE, 0x7F};
uint8_t keyvault_ec_Gx[0x1c] = {0x7E, 0x06, 0x09, 0x82, 0x47, 0xE6, 0xB5, 0x9F, 0x31, 0x10, 0xBC, 0xBB, 0x3A, 0xB6, 0xC2, 0x50, 0xBC, 0x5A, 0xB0, 0x6C, 0x03, 0x2D, 0xAD, 0x43, 0x68, 0x4C, 0x24, 0x8F};
uint8_t keyvault_ec_Gy[0x1c] = {0x0B, 0xD9, 0x41, 0x8D, 0xE8, 0xE3, 0xE4, 0x5D, 0x2D, 0x70, 0x1E, 0x02, 0x37, 0xFD, 0x7F, 0x2A, 0xDE, 0x0D, 0x48, 0xB7, 0x4C, 0xEE, 0xF2, 0xF1, 0xC8, 0xAC, 0x48, 0x4E};
uint8_t keyvault_ec_pubkey[2][0x38] = {
											{0x5F, 0x9D, 0x17, 0x1A, 0x2B, 0xDD, 0xA8, 0xD4, 0x08, 0x78, 0xBF, 0x98, 0x5A, 0xC3, 0x26, 0xED, 0x5E, 0xFF, 0x43, 0xC9, 0x37, 0x6C, 0x77, 0xEC, 0x0A, 0x00, 0xC7, 0xBB, 0xA3, 0x44, 0xE4, 0x4E, 0x6E, 0xAC, 0x25, 0x52, 0x35, 0xF9, 0x54, 0xF5, 0xB6, 0x17, 0xC7, 0xBD, 0x49, 0xF1, 0x80, 0x26, 0x24, 0x54, 0xAA, 0xE1, 0xB6, 0x2A, 0x9F, 0x2C},
											{0x67, 0x00, 0x2D, 0x9B, 0xB8, 0xE4, 0x2D, 0x2B, 0xF9, 0x61, 0x0B, 0x27, 0xFE, 0xAB, 0x9B, 0x34, 0x56, 0x15, 0x50, 0x92, 0x13, 0x12, 0xDF, 0xEE, 0x7A, 0x3A, 0x86, 0xEC, 0x6C, 0xA7, 0x14, 0x42, 0x6F, 0x6D, 0x4E, 0x96, 0x09, 0xA6, 0x38, 0xBF, 0x4A, 0xFB, 0x18, 0x2B, 0xFA, 0x50, 0xC8, 0x2F, 0xF2, 0xB4, 0xC5, 0xEC, 0x6C, 0xCD, 0x97, 0x65}
										};

uint8_t keyvault_ec_privkey[2][0x1c] = {
							{0x76, 0x74, 0x36, 0xA6, 0x99, 0x9D, 0x88, 0x48, 0x0E, 0xC8, 0x56, 0xF5, 0x5C, 0xEA, 0xBB, 0x43, 0x96, 0x85, 0x9E, 0x37, 0x45, 0x99, 0x40, 0x39, 0x21, 0xF5, 0x55, 0x98},
							{0x60, 0x7A, 0x2E, 0x55, 0x68, 0xB4, 0xB9, 0xA0, 0x32, 0xF4, 0x52, 0x53, 0xCF, 0xED, 0x20, 0xDB, 0x2E, 0x6E, 0x44, 0x6C, 0x37, 0x82, 0xE8, 0x2A, 0x1A, 0xB9, 0xC9, 0x23}
						};	
						
uint8_t hmac_key_0x22[0x40] = {0x54, 0x88, 0xA9, 0x81, 0x1C, 0x9A, 0x2C, 0xBC, 0xCC, 0x59, 0x6B, 0x1F, 0xAD, 0x1A, 0x7E, 0x29, 0xE0, 0x75, 0x84, 0x0F, 0x47, 0x43, 0x1F, 0x37, 0xAC, 0x06, 0x02, 0x46, 0x4A, 0x27, 0x9E, 0x02, 0xDF, 0x2E, 0x71, 0x65, 0xF1, 0x13, 0x7B, 0xF6, 0x9A, 0xE6, 0xDC, 0xB9, 0xDC, 0x38, 0x8C, 0x9D, 0xCC, 0xB3, 0x64, 0xC4, 0xCA, 0x26, 0xCB, 0x8F, 0x1A, 0xF0, 0x63, 0x8A, 0x6E, 0xAD, 0xB5, 0x4D};
