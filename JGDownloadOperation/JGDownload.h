//
//  JGDownload.h
//  JGDownloadAccelerator Tester
//
//  Created by Jonas Gessner on 21.04.13.
//  Copyright (c) 2013 Jonas Gessner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JGDownloadDefines.h"
#import "JGResumeObject.h"

@interface JGDownload : NSObject

@property (nonatomic, readonly, weak) id<JGDownloadManager> owner;
@property (nonatomic, readonly, weak) JGResumeObject *object; //owned by the operation's JGDownloadResumeMetadata
@property (nonatomic, readonly, weak) NSURL *url; //owned by the operation

- (BOOL)startLoading;
- (void)retry;
- (void)cancel;

- (id)initWithURL:(NSURL *)_url object:(JGResumeObject *)_object owner:(id <JGDownloadManager>)_owner;

@end
