//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (_Bool)transformsFontSizes;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CharacterStyleArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (int)writingDirection;
- (void)loadFromArchive:(const struct CharacterStyleArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;

@end
