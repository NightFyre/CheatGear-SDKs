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
	 * BlueprintGeneratedClass A_Shout.A_Shout_C
	 * Size -> 0x001F (FullSize[0x01C8] - InheritedSize[0x01A9])
	 */
	class UA_Shout_C : public U00_ActionParent_C
	{
	public:
		unsigned char                                              UnknownData_K6Z5[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class UDataTable*>                                  DT_Voices;                                               // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void CleanupAction(class ARaidGOAPController* P);
		void StartAction();
		void MoveInfo(const struct FVector& atLocation, EMoveRequest Branches);
		void ExecuteUbergraph_A_Shout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
