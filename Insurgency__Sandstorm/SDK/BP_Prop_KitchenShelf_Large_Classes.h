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
	 * DynamicClass BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C
	 * Size -> 0x0068 (FullSize[0x02A8] - InheritedSize[0x0240])
	 */
	class ABP_Prop_KitchenShelf_Large_C : public ABP_Prop_Shelf_Base_C
	{
	public:
		class UBreakableComponent*                                 Shelf_ItemTop02;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_ItemTop01;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Item04;                                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Item03;                                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Pot;                                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Pan;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Plate02;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Plate01;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Item02;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Shelf_Item01;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max_Shelf_Items;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTopShelfItem;                                           // 0x0294(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KBC[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBreakableComponent*>                         Shelf_Items;                                             // 0x0298(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Get_DrinkingGlass(class UBreakableComponent* bpp__Breakable__pf);
		void Get_CeramicItem(class UBreakableComponent* bpp__Breakable__pf);
		void Get_Bottle(class UBreakableComponent* bpp__Breakable__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
