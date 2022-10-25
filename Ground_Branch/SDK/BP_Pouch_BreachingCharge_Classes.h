#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Pouch_BreachingCharge.BP_Pouch_BreachingCharge_C
	 * Size -> 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
	 */
	class ABP_Pouch_BreachingCharge_C : public AGBPouch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              DetonatorClass;                                          // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanAddChild(class AGBItem* PotentialChild);
		void OnAddingChild(class AGBItem* AddedChild);
		void Refill();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Pouch_BreachingCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
