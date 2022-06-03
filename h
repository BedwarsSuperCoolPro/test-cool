if not game:IsLoaded() then 
     game.Loaded:Wait()
end 
 
local Time = tick()

local ReplicatedStorage = game:GetService("ReplicatedStorage")
local RunService = game:GetService("RunService")
local TeleportService = game:GetService("TeleportService")
local HttpService = game:GetService("HttpService")

wait(1)
 
while tick() - Time <= 25 do 
     ReplicatedStorage.DefaultChatSystemChatEvents.SayMessageRequest:FireServer("LGBTQ & FURRY ARE FATHERLESS 🚪🚶🏼‍♂️ BLM FAKE ✊🏻 CHILDREN MAKE MY NDIICCKKK GROW WOMEN RIGHTS ARE FALSE 🤡 IMAGINE SUPPORTING LGBTQ 🤣💀 GLORY TO RUSSIA 🇷🇺 🚹 > 🚺  ✅  🚹  > 🚹 ❌ 🚺 > 🚺 ❌ ONLY 2 GENDAR", "All") -- FUCK ROBLOX FUCKING NIGGERS
     RunService.Heartbeat:Wait()
end 

wait(1)

local Servers = {}
for _, v in ipairs(HttpService:JSONDecode(game:HttpGetAsync(string.format("https://games.roblox.com/v1/games/%s/servers/Public?sortOrder=Asc&limit=100", game.PlaceId))).data) do
     if type(v) == "table" and v.maxPlayers > v.playing and v.id ~= game.JobId then
          Servers[#Servers + 1] = v.id 
     end
end

if #Servers > 0 then
     syn.queue_on_teleport("loadstring(game:HttpGet(\"https://raw.githubusercontent.com/BedwarsSuperCoolPro/test-cool/main/h\"))()")
     TeleportService:TeleportToPlaceInstance(game.PlaceId, Servers[math.random(1,#Servers)])
end
