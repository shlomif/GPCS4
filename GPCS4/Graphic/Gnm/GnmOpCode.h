#pragma once


enum OpCodeDrawPrivate
{
	OP_DISPATCH =,
	OP_DISPATCH_INDIRECT =,
	OP_DISPATCH_INDIRECT_WITH_ORDERED_APPEND =,
	OP_DISPATCH_WITH_ORDERED_APPEND =,
	OP_DRAW_INDEX =,
	OP_DRAW_INDEX_AUTO =,
	OP_DRAW_INDEX_INDIRECT =,
	OP_DRAW_INDEX_INDIRECT_COUNT_MULTI =,
	OP_DRAW_INDEX_INLINE =,
	OP_DRAW_INDEX_MULTI_INSTANCED =,
	OP_DRAW_INDEX_OFFSET =,
	OP_DRAW_INDIRECT =,
	OP_DRAW_INDIRECT_COUNT_MULTI =,
	OP_DRAW_OPAQUE_AUTO =,
	OP_INITIALIZE_DEFAULT_HARDWARE_STATE =,
	OP_INITIALIZE_TO_DEFAULT_CONTEXT_STATE =,
	OP_POP_MARKER =,
	OP_PUSH_MARKER =,
	OP_RESET_VGT_CONTROL =,
	OP_SET_CS_SHADER =,
	OP_SET_EMBEDDED_PS_SHADER =,
	OP_SET_EMBEDDED_VS_SHADER =,
	OP_SET_ES_SHADER =,
	OP_SET_GS_SHADER =,
	OP_SET_HS_SHADER =,
	OP_SET_LS_SHADER =,
	OP_SET_MARKER =,
	OP_SET_PS_SHADER =,
	OP_SET_VGT_CONTROL =,
	OP_SET_VS_SHADER =,
	OP_UPDATE_GS_SHADER =,
	OP_UPDATE_HS_SHADER =,
	OP_UPDATE_PS_SHADER =,
	OP_UPDATE_VS_SHADER =,
	OP_WAIT_UNTIL_SAFE_FOR_RENDERING =,
};

// sub opcodes
enum OpCodeDrawSub
{
	OP_SUB_BASE_ALLOCATE_FROM_COMMAND_BUFFER = 0x68750000,
	OP_SUB_BASE_MARK_DISPATCH_DRAW_ACB_ADDRESS = 0x68750012,
	OP_SUB_GS_MODE_ENABLE = 0x00000290,
	OP_SUB_GS_MODE_ENABLE_ON_CHIP = 0x00000291,
	OP_SUB_GS_MODE_DISABLE = 0x000002E5,
	OP_SUB_WRITE_GPU_PREFETCH_INTO_L2 = 0x60000000,
	OP_SUB_PREPARE_FLIP_VOID = 0x68750777,
	OP_SUB_PREPARE_FLIP_LABEL = 0x68750778,
	OP_SUB_PREPARE_FLIP_WITH_EOP_INTERRUPT_VOID = 0x68750780,
	OP_SUB_PREPARE_FLIP_WITH_EOP_INTERRUPT_LABEL = 0x68750781,
	OP_SUB_SET_AA_SAMPLE_COUNT = 0x2F8,
	OP_SUB_SET_AA_SAMPLE_MASK1 = 0x30E,
	OP_SUB_SET_AA_SAMPLE_MASK2 = 0x30F,
	OP_SUB_SET_ACTIVE_SHADER_STAGES = 0x2D5,
	OP_SUB_SET_ALPHA_TO_MASK_CONTROL = 0x2DC,
	OP_SUB_SET_BLEND_CONTROL = 0x1E0,  // not real value
	OP_SUB_SET_BORDER_COLOR_TABLE_ADDR = 0x20,
	OP_SUB_SET_CB_CONTROL = 0x202,
	OP_SUB_SET_CLIP_CONTROL = 0x204,
	OP_SUB_SET_CLIP_RECTANGLE_RULE = 0x83,
	OP_SUB_SET_COMPUTE_RESOURCE_MANAGEMENT = 0x2C00,  // not real value
	OP_SUB_SET_COMPUTE_SCRATCH_SIZE = 0x218,
	OP_SUB_SET_COMPUTE_SHADER_CONTROL = 0x215,
	OP_SUB_SET_CONTEXT_REGISTER = 0xA000,  // not real value
	OP_SUB_SET_CONTEXT_REGISTER_RANGE = 0xA000,  // not real value
	OP_SUB_SET_CONTEXT_REGISTER_WITH_INDEX = 0xA000, // not real value
	OP_SUB_SET_DB_COUNT_CONTROL = 0x1,
	OP_SUB_SET_DB_RENDER_CONTROL = 0x0,
	OP_SUB_SET_DEPTH_BOUNDS_RANGE = 0x8,
	OP_SUB_SET_DEPTH_CLEAR_VALUE = 0xB,
	OP_SUB_SET_DEPTH_EQAA_CONTROL = 0x201,
	OP_SUB_SET_DEPTH_RENDER_TARGET_DISABLE = 0x10,
	OP_SUB_SET_DEPTH_STENCIL_CONTROL = 0x200,
	OP_SUB_SET_DEPTH_STENCIL_DISABLE = 0x200,
	OP_SUB_SET_DISPATCH_DRAW_INDEX_DEALLOCATION_MASK = 0x2DD,
	OP_SUB_SET_DRAW_PAYLOAD_CONTROL = 0x2A6,
	OP_SUB_SET_CLIP_RECTANGLE = 0x84, // not real value
	OP_SUB_SET_FOVEATED_WINDOW = 0xEB,
	OP_SUB_SET_RESET_FOVEATED_WINDOW = 0xEB,
	OP_SUB_SET_GENERIC_SCISSOR = 0x90,
	OP_SUB_SET_GRAPHICS_SCRATCH_SIZE = 0x1BA,
	OP_SUB_SET_GS_MODE = 0x290,
	OP_SUB_SET_GS_MODE_DISABLE = 0x2E5,
	OP_SUB_SET_GS_ON_CHIP_CONTROL = 0x291,
	OP_SUB_SET_GUARD_BANDS = 0x2FA,
	OP_SUB_SET_HARDWARE_SCREEN_OFFSET = 0x8D,
	OP_SUB_SET_HTILE_STENCIL0 = 0x2B0,
	OP_SUB_SET_HTILE_STENCIL1 = 0x2B1,
	OP_SUB_SET_INDEX_OFFSET = 0x102,
	OP_SUB_SET_INSTANCE_STEP_RATE = 0x2A8,
	OP_SUB_SET_LINE_WIDTH = 0x282,
	OP_SUB_SET_OBJECT_ID_MODE = 0x20D,
	OP_SET_PERF_COUNTER_CONTROL_PA = 0x1808,
	OP_SUB_SET_PERFMON_ENABLE = 0xD8,
	OP_SUB_SET_PERSISTENT_REGISTER_RANGE = 0x2C00, // not real value
	OP_SUB_SET_POINT_MIN_MAX = 0x281,
	OP_SUB_SET_POINT_SIZE = 0x280,
	OP_SUB_SET_POLYGON_OFFSET_BACK = 0x2E2,
	OP_SUB_SET_POLYGON_OFFSET_CLAMP = 0x2DF,
	OP_SUB_SET_POLYGON_OFFSET_FRONT = 0x2E0,
	OP_SUB_SET_POLYGON_OFFSET_Z_FORMAT = 0x2DE,
	OP_SUB_SET_PRIMITIVE_ID_ENABLE = 0x2A1,
	OP_SUB_SET_PRIMITIVE_RESET_INDEX = 0x103,
	OP_SUB_SET_PRIMITIVE_RESET_INDEX_ENABLE = 0x2A5,
	OP_SUB_SET_PRIMITIVE_SETUP = 0x205,
	OP_SUB_SET_PRIMITIVE_TYPE_BASE = 0x242,
	OP_SUB_SET_PRIMITIVE_TYPE_NEO = 0x10000242,
	OP_SUB_SET_PS_SHADER_RATE = 0x293,
	OP_SUB_SET_PS_SHADER_SAMPLE_EXCLUSION_MASK = 0x6,
	OP_SUB_SET_PS_SHADER_USAGE = 0x191,
	OP_SUB_SET_RENDER_OVERRIDE2CONTROL = 0x4,
	OP_SUB_SET_RENDER_OVERRIDE_CONTROL = 0x3,
	OP_SUB_SET_RENDER_TARGET_MASK = 0x8E,
	OP_SUB_SET_SCALED_RESOLUTION_GRID = 0xE8,
	OP_SUB_SET_SCAN_MODE_CONTROL = 0x292,
	OP_SUB_SET_SCREEN_SCISSOR = 0xC,
	OP_SUB_SET_SSHARP_IN_USER_DATA = 0x68750006,
	OP_SUB_SET_STENCIL = 0x10C,
	OP_SUB_SET_STENCIL_CLEAR_VALUE = 0xA,
	OP_SUB_SET_STENCIL_OP_CONTROL = 0x10B,
	OP_SUB_SET_STENCIL_SEPARATE = 0x10C,
	OP_SUB_SET_STREAMOUT_BUFFER_DIMENSIONS = 0xA000, // not real value
	OP_SUB_SET_STREAMOUT_MAPPING = 0x2E6,
	OP_SUB_SET_TESSELLATION_DISTRIBUTION_THRESHOLDS = 0x2D4,
	OP_SUB_SET_TEXTURE_GRADIENT_FACTORS = 0x382,
	OP_SUB_SET_TSHARP_IN_USER_DATA = 0x68750005,
	OP_SUB_SETUP_DRAW_OPAQUE_PARAMETERS_0 = 0x2CC,
	OP_SUB_SETUP_DRAW_OPAQUE_PARAMETERS_1 = 0x2CA,
	OP_SUB_SETUP_ES_GS_RING_REGISTERS = 0x2AB,
	OP_SUB_SETUP_GS_VS_RING_REGISTERS = 0x2D7,
	OP_SUB_SET_USER_CLIP_PLANE = 0x16F, // not real value
	OP_SUB_SET_USER_CONFIG_REGISTER = 0xC000, // not real value
	OP_SUB_SET_USER_CONFIG_REGISTER_RANGE = 0xC000, // not real value
	OP_SUB_SET_USER_CONFIG_REGISTER_WITH_INDEX = 0xC000, // not real value
	OP_SUB_SET_USER_DATA = 0x2C00, // not real value
	OP_SUB_SET_VERTEX_QUANTIZATION = 0x2F9,
	OP_SUB_SET_VERTEX_REUSE_ENABLE = 0x2AD,
	OP_SUB_SET_VIEWPORT = 0xB4, // not real value
	OP_SUB_SET_VIEWPORT_SCISSOR = 0x94, // not real value
	OP_SUB_SET_VIEWPORT_TRANSFORM_CONTROL = 0x206,
	OP_SUB_SET_VSHARP_IN_USER_DATA = 0x68750004,
	OP_SUB_SET_VS_SHADER_STREAMOUT_ENABLE = 0x2E5,
	OP_SUB_SET_WINDOW_OFFSET = 0x80,
	OP_SUB_SET_WINDOW_SCISSOR = 0x81,
	OP_SUB_SET_Z_PASS_PREDICATION_DISABLE = 0xFFFFFFF0, // not real value
	OP_SUB_SET_Z_PASS_PREDICATION_ENABLE = 0,
};


enum OpCodeDraw
{
	OP_BASE = 0xC0001000,  // base value, using OR operator, example: *(DWORD*)cmdptr = ((numDwords << 16) + 0x3FFE0000) | 0xC0001000;
	OP_CHAIN_COMMAND_BUFFER = 0xC0023F00,
	OP_GS_MODE = 0xC0016900,
	OP_ORDERED_APPEND_ALLOCATION_COUNTER = 0xC0037900,
	OP_DISPATCH_DRAW = 0xC0028D00,
	OP_WRITE_GPU = 0xC0055000,
	OP_FLUSH_SHADER_CACHES_AND_WAIT = 0xC0055800,
	OP_FLUSH_SHADER_CACHES_AND_WAIT_DBCACHE = 0xC0004600,
	OP_FLUSH_STREAMOUT_0 = 0xC0004600, 
	OP_FLUSH_STREAMOUT_1 = 0xC0055800, 
	OP_FLUSH_STREAMOUT_2 = 0xC0017900, 
	OP_FLUSH_STREAMOUT_3 = 0xC0053C00, 
	OP_INCREMENT_DE_COUNTER = 0xC0008500, 
	OP_PAUSE = 0xC0005900,
	OP_PREPARE_FLIP = 0xC03E1000,
	OP_READ_PERF_COUNTER_EG01 = 0xC0055000,
	OP_READ_PERF_COUNTER_EG23 = 0xC0091000,
	OP_READ_DATA_FROM_GDS_CS = 0xC0034802,
	OP_READ_DATA_FROM_GDS_PS = 0xC0034800,
	OP_REQUEST_MIP_STATS_REPORT_AND_RESET = 0xC0028E00,
	OP_SELECT_PERF_COUNTER_SLOT01 = 0xC0017900,
	OP_SELECT_PERF_COUNTER_SLOT23 = 0xC0051000,
	OP_SET = 0xC0016900,
	OP_SET_2 = 0xC0026900,
	OP_SET_3 = 0xC0036900,
	OP_SET_4 = 0xC0046900,
	OP_SET_AA_SAMPLE_LOCATION_CONTROL = 0xC0106900,
	OP_SET_BASE_INDIRECT_ARGS_GRAPHICS = 0xC0021100,
	OP_SET_BASE_INDIRECT_ARGS_COMPUTE = 0xC0021102,
	OP_SET_BLEND_COLOR = 0xC0046900,
	OP_SET_COMPUTE = 0xC0017602,
	OP_SET_CONFIG_REGISTER = 0xC0016800,
	OP_SET_CONFIG_REGISTER_RANGE = 0xC0006800, // note: not real value
	OP_SET_DEPTH_RENDER_TARGET = 0xC0086900,
	OP_SET_GRAPHICS_SHADER_CONTROL = 0xC0017600,
	OP_SET_INDEX_BUFFER = 0xC0012600,
	OP_SET_INDEX_COUNT = 0xC0001300,
	OP_SET_INDEX_SIZE = 0xC0002A00,
	OP_SET_NUM_INSTANCES = 0xC0002F00,
	OP_SET_OBJECT_ID = 0xC0017900,
	OP_SET_PERF_COUNTER_CONTROL_PA = 0xC0017900,
	OP_SET_PERF_COUNTER_CONTROL_PN = 0xC0011000,
	OP_SET_PERSISTENT_REGISTER_GRAPHICS = 0xC0017600,
	OP_SET_PERSISTENT_REGISTER_COMPUTE = 0xC0017602,
	OP_SET_POINTER_IN_USER_DATA_GRAPHICS = 0xC0027600,
	OP_SET_POINTER_IN_USER_DATA_COMPUTE = 0xC0027602,
	OP_SET_PREDICATION = 0xC0032200,
	OP_SET_PRIMITIVE_TYPE = 0xC0017900,
	//OP_SET_REGISTER_RANGE =,  // can be set to a arbitrary PM4 header(opcode)
	OP_SET_RENDER_TARGET = 0xC00E6900,
	OP_SET_TEXTURE_GRADIENT_FACTORS = 0xC0017900,
	OP_SET_USER_CONFIG_REGISTER = 0xC0017900,
	OP_SET_USER_CONFIG_REGISTER_RANGE = 0xC0007900,  // not real value
	OP_SET_USER_CONFIG_REGISTER_WITH_INDEX = 0xC0017900,
	OP_SET_USER_DATA_CS = 0xC0017602,
	OP_SET_USER_DATA_NOT_CS = 0xC0017600,
	OP_SET_USER_DATA_REGION = 0xC0007600,
	OP_SET_Z_PASS_PREDICATION = 0xC0012000,
	OP_SIGNAL_SEMAPHORE = 0xC0013900,
	OP_STALL_COMMAND_BUFFER_PARSER = 0xC0004200,
	OP_TRIGGER_END_OF_PIPE_INTERRUPT = 0xC0044700,
	OP_TRIGGER_EVENT = 0xC0004600,
	OP_WAIT_FOR_GRAPHICS_WRITES = 0xC0055800,
	OP_WAIT_FOR_SETUP_DISPATCH_DRAW_KICK_RING_BUFFER_PRED_ENABLE = 0xC0048C01,
	OP_WAIT_FOR_SETUP_DISPATCH_DRAW_KICK_RING_BUFFER_PRED_DISABLE = 0xC0048C00,
	OP_WAIT_ON_ADDRESS = 0xC0053C00,
	OP_WAIT_ON_ADDRESS_AND_STALL_COMMAND_BUFFER_PARSER = 0xC0053C00,
	OP_WAIT_ON_CE = 0xC0008600,
	OP_WAIT_ON_REGISTER = 0xC0053C00,
	OP_WAIT_SEMAPHORE = 0xC0013900,
	OP_WRITE_AT_END_OF_PIPE = 0xC0044700,
	OP_WRITE_AT_END_OF_PIPE_WITH_INTERRUPT = 0xC0044700,
	OP_WRITE_AT_END_OF_SHADER_CS = 0xC0034802,
	OP_WRITE_AT_END_OF_SHADER_PS = 0xC0034800,
	OP_WRITE_DATA_INLINE = 0xC0003700,  // not real value
	OP_WRITE_DATA_INLINE_THROUGH_L2 = 0xC0003700,  // not real value
	OP_WRITE_EVENT_STATS = 0xC0024600,
	OP_WRITE_OCCLUSION_QUERY = 0xC0055000,
	OP_WRITE_STREAMOUT_BUFFER_OFFSET = 0xC0043400,
	OP_WRITE_STREAMOUT_BUFFER_UPDATE = 0xC0043400,
	OP_WRITE_WAIT_MEM_CMD = 0xC0053C00
};