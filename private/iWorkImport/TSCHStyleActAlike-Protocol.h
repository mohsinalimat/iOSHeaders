//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class TSSPropertySet;

@protocol TSCHStyleActAlike <NSObject, TSDMixing>
- (id)boxedDefaultValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (TSSPropertySet *)properties;
- (id)boxedValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)valueForProperty:(int)arg1;
- (_Bool)overridesProperty:(int)arg1;
- (_Bool)definesProperty:(int)arg1;
@end

