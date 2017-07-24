//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLFontCache, NSSet, NSString;

@interface NFLAbstractCellPropertyProvider : NSObject
{
    id *_propertiesByColumnSpan;
    unsigned long long propertiesByColumnSpanSize;
    double _scaleValue;
    NFLFontCache *_fontCache;
    NSSet *_supportedColumnSpans;
    Class _propertyClass;
    NSString *_plistName;
}

+ (id)publisherTitleFontSmall;
+ (id)publisherTitleFontLarge;
@property(retain, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property(nonatomic) Class propertyClass; // @synthesize propertyClass=_propertyClass;
@property(readonly, nonatomic) NSSet *supportedColumnSpans; // @synthesize supportedColumnSpans=_supportedColumnSpans;
@property(readonly, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
@property(readonly, nonatomic) double scaleValue; // @synthesize scaleValue=_scaleValue;
- (void).cxx_destruct;
- (id)propertiesIrrespectiveToColumnSpan;
- (id)propertiesForColumnSpan:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5;

@end

