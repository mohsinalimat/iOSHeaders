//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    NSSet *_bookmarkHomes;
}

@property(readonly, nonatomic) NSSet *bookmarkHomes; // @synthesize bookmarkHomes=_bookmarkHomes;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (void)dealloc;

@end

