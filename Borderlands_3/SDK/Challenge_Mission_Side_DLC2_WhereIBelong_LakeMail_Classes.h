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
	 * BlueprintGeneratedClass Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 MailTable;                                               // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              OutrunnerPart[0x28];                                     // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.OutrunnerPart
		unsigned char                                              RevolverPart[0x28];                                      // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.RevolverPart
		unsigned char                                              TechnicalPart[0x28];                                     // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.TechnicalPart

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
