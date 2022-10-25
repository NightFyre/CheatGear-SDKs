#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_OnlineStore_CategoryButton.BP_OnlineStore_CategoryButton_C
	 * Size -> 0x000C (FullSize[0x02C4] - InheritedSize[0x02B8])
	 */
	class UBP_OnlineStore_CategoryButton_C : public UBP_OnlineStore_CategoryBaseButton_C
	{
	public:
		EStoreItemCategory                                         StoreCategory;                                           // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_UPQD[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OperationName;                                           // 0x02BC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
