//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount
{
    int _imapNotesAccountVersion;
}

@property(nonatomic, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion; // @synthesize imapNotesAccountVersion=_imapNotesAccountVersion;
- (id)onBehalfOfBundleIdentifier;
- (_Bool)isEqualToAccount:(id)arg1;

@end

