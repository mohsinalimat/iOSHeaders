//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHSettings.h>

@interface PHImageManagerSettings : PHSettings
{
    _Bool _allowImageRequests;
    _Bool _allowCaching;
}

+ (id)settingsControllerModule;
+ (id)sharedSettings;
@property(nonatomic) _Bool allowCaching; // @synthesize allowCaching=_allowCaching;
@property(nonatomic) _Bool allowImageRequests; // @synthesize allowImageRequests=_allowImageRequests;
- (void)setDefaultValues;
- (id)parentSettings;

@end

