//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePreset : TSPObject <TSSPreset>
{
    unsigned long long mIndex;
}

- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStrokePresetArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

