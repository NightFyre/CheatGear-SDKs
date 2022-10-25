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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CustomServerLocalisation.LocPairData
	 * Size -> 0x0020
	 */
	struct FLocPairData
	{
	public:
		class FString                                              Locale;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Value;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerLocalisation.CustomServerLocalisationData
	 * Size -> 0x0020
	 */
	struct FCustomServerLocalisationData
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<struct FLocPairData>                                LocaleEntries;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CustomServerLocalisation.CustomServerLocalisationModel
	 * Size -> 0x0050
	 */
	struct FCustomServerLocalisationModel
	{
	public:
		TMap<class FString, struct FCustomServerLocalisationData>  LocalisationModelData;                                   // 0x0000(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct CustomServerLocalisation.CustomServerClientData
	 * Size -> 0x0020
	 */
	struct FCustomServerClientData
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V7ZH[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
