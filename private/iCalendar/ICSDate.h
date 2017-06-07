//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty
{
}

- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)description;
- (_Bool)hasFloatingTimeZone;
- (_Bool)hasTimeComponent;
- (id)components;
@property(retain, nonatomic) NSString *tzid;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithValue:(id)arg1;

@end

