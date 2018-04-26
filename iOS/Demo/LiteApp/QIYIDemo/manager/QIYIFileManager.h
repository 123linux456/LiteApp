/**
 *
 * Copyright 2018 iQIYI.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
//  QIYIFileManager.h
//  QIYIMiniProgram
//
//  Created by yanqiang zhang on 08/02/2018.
//  Copyright © 2018 www.iqiyi.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QIYIFileManager : NSObject
@property(nonatomic, strong, readwrite) NSString* root_base;
@property(nonatomic, strong, readwrite) NSString* root_business;

+(instancetype) sharedManager;
-(NSString*) rootPath;
-(NSData*) readFromFile:(NSString*)file;
-(BOOL) writeToPath:(NSString*)file data:(NSData*)buffer;
-(BOOL) isExist:(NSString*)file;
-(BOOL) makeDir:(NSString*)dir;
-(BOOL) clear;
@end
