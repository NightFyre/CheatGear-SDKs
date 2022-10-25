#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class DebugMenu.DebugMenuComponent
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	class UDebugMenuComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TNEQ[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADebugMenu*                                          DebugMenuInstance;                                       // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XPJP[0x20];                                  // 0x00F8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugMenu.DebugMenuEntryGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugMenuEntryGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugMenu.DebugMenuDataAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UDebugMenuDataAsset : public UDataAsset
	{
	public:
		TArray<class UDebugMenuDataAsset*>                         DataAssets;                                              // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FDebugMenuDataAssetEntry>                    MenuEntires;                                             // 0x0038(0x0010) Edit, ZeroConstructor
		TArray<struct FDebugMenuButtonShortcut>                    ButtonShortcuts;                                         // 0x0048(0x0010) Edit, ZeroConstructor
		TArray<class UDebugMenuEntryGenerator*>                    MenuEntryGenerators;                                     // 0x0058(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugMenu.DebugMenu
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class ADebugMenu : public AActor
	{
	public:
		unsigned char                                              UnknownData_O4P3[0xB0];                                  // 0x03C8(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugMenu.DebugMenuComponentMock
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UDebugMenuComponentMock : public UDebugMenuComponent
	{
	public:
		unsigned char                                              UnknownData_STBH[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugMenu.DebugMenuTestFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsDebugMenuReady(class UObject* WorldContextObject);
		bool STATIC_IsDebugMenuOpen(class UObject* WorldContextObject);
		bool STATIC_IsDebugMenuAvailable();
		struct FKey STATIC_GetDebugMenuToggleKeyComboBetaKeyboard();
		struct FKey STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard();
		struct FKey STATIC_GetDebugMenuToggleButtonComboBetaGamepad();
		struct FKey STATIC_GetDebugMenuToggleButtonComboAlphaGamepad();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
