//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (KSExtras)
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
- (_Bool)_containsHiraganaKatakanaOrBopomofo;
- (_Bool)_containsEmoji;
- (_Bool)_containsIdeographicCharacters;
- (_Bool)_containsCJKSymbolsAndPunctuation;
- (_Bool)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
@end

