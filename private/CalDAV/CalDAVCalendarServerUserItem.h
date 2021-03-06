//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerAccessItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVLeafItem *_summary;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_acceptedURL;
}

@property(retain, nonatomic) NSURL *acceptedURL; // @synthesize acceptedURL=_acceptedURL;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CalDAVCalendarServerAccessItem *access; // @synthesize access=_access;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain, nonatomic) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyParseRules;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (id)description;
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;
- (id)init;

@end

