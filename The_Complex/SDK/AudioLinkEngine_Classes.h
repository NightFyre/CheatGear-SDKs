#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class AudioLinkEngine.AudioLinkBlueprintInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioLinkBlueprintInterface : public UInterface
	{
	public:
		void StopLink();
		void SetLinkSound(class USoundBase* NewSound);
		void PlayLink(float StartTime);
		bool IsLinkPlaying();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
