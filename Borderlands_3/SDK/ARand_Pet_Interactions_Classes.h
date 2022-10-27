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
	 * BlueprintGeneratedClass ARand_Pet_Interactions.ARand_Pet_Interactions_C
	 * Size -> 0x000F (FullSize[0x0250] - InheritedSize[0x0241])
	 */
	class UARand_Pet_Interactions_C : public UARand_Pet_Fidgets_C
	{
	public:
		unsigned char                                              UnknownData_OYDJ[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Jabber_Jewels();
		void Notify_Jabber_ButtScratch();
		void Notify_Jabber_ButtShake();
		void Notify_Spiderant_Spiders();
		void Notify_Spiderant_GroundDig();
		void Notify_Skag_Excited();
		void Notify_Skag_Rollover();
		void ExecuteUbergraph_ARand_Pet_Interactions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
