#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
	 */
	struct UBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params
	{
	public:
		bool                                                       HasFlow;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
	 */
	struct UBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params
	{
	public:
		bool                                                       Destroyed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
	 */
	struct UBPI_IO_ExplodingPipe_C_SetPipeState_Params
	{
	public:
		Enum_IO_ExplodingPipe_DestroyedState                       PipeState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
	 */
	struct UBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params
	{
	public:
		bool                                                       HasFlow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe
	 */
	struct UBPI_IO_ExplodingPipe_C_DestroyPipe_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
