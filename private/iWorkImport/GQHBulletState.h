//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHBulletState : NSObject
{
    struct __CFArray *mLevels;
    int mCurrentLevel;
}

+ (struct __CFString *)createLabelStr:(int)arg1 number:(int)arg2;
- (int)currentLevel;
- (void)setCurrentLevel:(int)arg1;
- (struct __CFString *)createTieredNumberStringForLevel:(int)arg1;
- (id)listStyleAtLevel:(int)arg1;
- (void)setListStyle:(id)arg1 atLevel:(int)arg2;
- (int)textIndentForLevel:(int)arg1;
- (void)setTextIndent:(int)arg1 level:(int)arg2;
- (int)bulletIndentForLevel:(int)arg1;
- (void)setBulletIndent:(int)arg1 level:(int)arg2;
- (struct __CFString *)bulletChar:(int)arg1;
- (void)setBulletChar:(struct __CFString *)arg1 level:(int)arg2;
- (int)labelTypeAtLevel:(int)arg1;
- (void)setLabelType:(int)arg1 level:(int)arg2;
- (int)numberAtLevel:(int)arg1;
- (_Bool)hasNumberAtLevel:(int)arg1;
- (void)setNumber:(int)arg1 level:(int)arg2;
- (int)typeAtlevel:(int)arg1;
- (void)setType:(int)arg1 level:(int)arg2;
- (void)dealloc;
- (id)init;

@end

