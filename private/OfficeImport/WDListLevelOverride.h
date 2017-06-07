//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WDDocument, WDListLevel;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    _Bool mStartNumberOverridden;
}

- (id)description;
- (_Bool)isListLevelOverridden;
- (id)mutableListLevel;
- (id)listLevel;
- (_Bool)isStartNumberOverridden;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;
- (unsigned char)level;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;
- (void)dealloc;

@end

