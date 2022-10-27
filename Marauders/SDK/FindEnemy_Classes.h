#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass FindEnemy.FindEnemy_C
	 * Size -> 0x0008 (FullSize[0x01B0] - InheritedSize[0x01A8])
	 */
	class UFindEnemy_C : public UGOAPAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void StartAction();
		void ExecuteUbergraph_FindEnemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
