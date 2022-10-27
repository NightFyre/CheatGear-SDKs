#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Class SCUE4.SCLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USCLibrary : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SCUE4.SCUE4Settings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USCUE4Settings : public UObject
	{
	public:
		class FString                                              KeyGeneratorPath;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SCUE4.SafeGameInstance
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class USafeGameInstance : public UGameInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SCUE4.SafeGameInstanceSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USafeGameInstanceSubsystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
