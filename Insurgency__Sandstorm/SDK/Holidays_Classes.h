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
	 * Class Holidays.HolidaySettings
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UHolidaySettings : public UDeveloperSettings
	{
	public:
		TMap<class FName, struct FHolidayDefinition>               Holidays;                                                // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Holidays.HolidayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHolidayStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsHolidayDefinitionActive(const struct FHolidayDefinition& InHolidayDefinition);
		bool STATIC_IsHolidayActive(const class FName& Holiday);
		void STATIC_GetActiveHolidays(TArray<class FName>* OutActiveHolidays);
		bool STATIC_FindHolidayDefinition(const class FName& Holiday, struct FHolidayDefinition* OutHolidayDefinition);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
