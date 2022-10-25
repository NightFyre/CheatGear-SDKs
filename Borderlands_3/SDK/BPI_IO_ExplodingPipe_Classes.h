#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_IO_ExplodingPipe_C : public UInterface
	{
	public:
		void GetPipeFlowState(bool* HasFlow);
		void GetPipeDestroyedState(bool* Destroyed);
		void SetPipeState(Enum_IO_ExplodingPipe_DestroyedState PipeState);
		void SetPipeFlowState(bool HasFlow);
		void DestroyPipe();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
