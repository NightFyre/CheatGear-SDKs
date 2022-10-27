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
	 * Class AuthenticationToken.JwtAuthenticationTokenSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UJwtAuthenticationTokenSettings : public UObject
	{
	public:
		class FString                                              TokenSecretKey;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AuthenticationToken.JwtAuthenticationTokenEditorSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UJwtAuthenticationTokenEditorSettings : public UObject
	{
	public:
		class FString                                              TokenSecretKey;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
