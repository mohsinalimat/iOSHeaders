//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyEventMap_zh_Phonetic.h>

@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic
{
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedInstance;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (_Bool)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1;
- (id)punctuationMap;

@end

