//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLAbstractCellPropertyProvider, NFLFeedSettings;

@interface NFLAbstractCellSizer : NSObject
{
    NFLAbstractCellPropertyProvider *_propertyProvider;
    NFLFeedSettings *_feedSettings;
}

@property(nonatomic) __weak NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider; // @synthesize propertyProvider=_propertyProvider;
- (void).cxx_destruct;
- (id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(_Bool)arg4;
- (id)initWithFeedSettings:(id)arg1;
- (id)init;

@end

